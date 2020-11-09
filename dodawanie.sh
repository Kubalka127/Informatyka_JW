#!/bin/bash
clear
kon="t"

while [ "$kon" = "t" ]
do



                echo "podaj nazwisko:"
                read nazwisko
                echo "podaj imie:"
                read imie
                echo "podaj telefon:"
                read telefon

                echo "$nazwisko $imie $telefon" >> dane.txt
                echo "nastepujace dane zostaly zapisane: $nazwisko $imie $telefon"
                echo "czy chcesz kontynuowac wprowadzanie danych? (t/n):"
        read kon

         done
