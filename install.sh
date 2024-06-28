echo "Be sure to run with sudo"
make
gcc -o masterplan masterplan.c
gcc -o sambori sambori.c
gcc -o samyak samyak.c
cd sdns-rpl/tests/15-rpl-classic/code
make dis-sender
cp receiver-node.native /usr/bin/rpl
mv samyak /usr/bin
mv sambori /usr/bin
mv masterplan /usr/bin
mv network-enabler.sh /usr/bin
cp pat.c /usr/bin
cp pattern.c /usr/bin

echo "Be Sure To Set network-enabler.sh into StartUp Script" > StartUp-Readme.md
