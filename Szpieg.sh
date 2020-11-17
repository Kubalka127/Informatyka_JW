  
#!/bin/bash
dalej="t"
while [ "$dalej" = "t" ]
do
clear

echo "Podaj nazwe uzytkownika"
read uzytkownik

if [ "$(users | grep "$uzytkownik")" != "" ]
then

echo "wprowadz adres email na ktory wyslac wiadomosc"
read adres
email="$adres"
echo "$uzytkownik jest zalogowany" | mutt -s "uzytkownik $uzytkownik jest zalogowany" $email 
echo "wiadomosc zostala wyslana na podany  email"

else

echo "wprowadz adres na ktory wyslac wiadomosc"
read adres
email="$adres"
echo "$uzytkownik nie jest zalogowany" | mutt -s "uzytkownik $uzytkownik nie jest zalogowany" $email 
echo "wiadomosc zostala wyslana"

fi
echo "kontynuowac? (t/n)"
read dalej
done
