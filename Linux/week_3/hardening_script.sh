#!/bin/bash
#Apache hardening script week 3 opdracht d.

CONFIG='/etc/apache2/apache.conf'




# Backing Up Original Configuration

echo -n '> Backing Up Original Configuration... '
cp $CONFIG "$CONFIG.bk" &

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi


# Protection Against Fingerprinting

echo -n '> Enabling Protection Against Fingerprinting... '

sed -i -e 's/ServerSignature On/ServerSignature Off/' $CONFIG
sed -i -e 's/ServerTokens OS/ServerTokens Prod/' $CONFIG

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi


# Disabling Directory Listing 

echo -n '> Disabling Directory Listing... '

sed -r -i -e 's|^([[:space:]]*)</Directory>|\n\n\1\t# Hardening Related Configurations ===============\n\1</Directory>|g' $CONFIG
sed -r -i -e 's|^([[:space:]]*)</Directory>|\1\tOptions -Indexes\n\1</Directory>|g' $CONFIG

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi


# Disable Server Side Includes and Symbolic Links

echo -n '> Disable SSI and SymLinks... '

sed -r -i -e 's|^([[:space:]]*)</Directory>|\1\tOptions -Includes\n\1\tOptions -FollowSymLinks\n\1</Directory>|g' $CONFIG

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi




# Limit Request Size To Prevent DOS

echo -n '> imit Request Size... '

sed -r -i -e 's|^([[:space:]]*)</Directory>|\1\tLimitRequestBody 512000\n\1\tOptions -FollowSymLinks\n\1</Directory>|g' $CONFIG 

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi


# Disable Risky HTTP Methods

echo -n '> Disable Risky HTTP Methods... '

sed -r -i -e 's|^([[:space:]]*)</Directory>|\n\1\t<LimitExcept GET POST HEAD>\n\1\t\tdeny from all\n\1\t</LimitExcept>\n\n</Directory>|g' $CONFIG

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi


# Enable XSS Protection For Modern Browsers

echo -n '> Enable XSS Protection For Modern Browsers... '

echo '' >> $CONFIG 
echo '<IfModule mod_headers.c>' >> $CONFIG 
echo 'Header set X-XSS-Protection 0' >> $CONFIG 
echo '</IfModule>' >> $CONFIG 

SUCCESS=$?

if [ $SUCCESS -eq 0 ]; then
    echo "[OK]"
else
    echo "[ERROR]"
fi





# Restart Apache Server

echo '> Restart Apache Server:'

sudo systemctl restart apache2 
