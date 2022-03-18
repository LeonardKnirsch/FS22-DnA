# Woche 4

## Allgemeines

Bei der letzten Serie gab es Studierende, welche den **exakt** gleichen Code abgegeben haben. Grundsätzlich finde ich es gut, dass ihr zusammenarbeitet, bitte gebt aber nur Code ab, welchen ihr selber geschrieben habt. Falls ihr Dinge aus dem Internet verwendet oder zusammenarbeitet, solltet ihr dies auch als Kommentar erwähnen (das ist sauberer, als sie stillschweigend zu verwenden).
Ich habe im konkreten Fall Punkte abgezogen und behalte mir vor, dies der Head-TA oder dem Dozenten weiterzuleiten. (Bei der Bonusaufgabe könnte dies ernsthafte Folgen haben (Disziplinarverordnung...))   

Erklärung Punktesystem: Grundsätzlich erhaltet ihr XP, falls ihr mehr als den Pass-Threshold erreicht, unter dem Threshold erhaltet ihr keine Punkte. Ich kann je nachdem noch etwas mehr Punkte als der Judge geben. Für die Bonusaufgabe sind die ersten 4 Serien entscheidend, ihr könnt also mit dieser Serie diese noch freischalten!

Falls ihr bei Programmieraufgaben Probleme habt: Stellt unbedingt zuerst sicher, dass Teilfunktionen korrekt sind, bevor ihr alles auf einmal probiert.



## Nachtrag Quicksort

Divide and Conquer: Finde mittels einer Partitionierungsfunktion die richtige Position eines Elementes und verfahre rekursiv auf beiden Seiten fort.  
Im Durchschnitt: $\mathcal{O}(n \log{(n)})$ Vergleiche, bei unglücklichem Pivotieren können $\mathcal{O}(n^2)$ Vergleiche notwendig sein. Vorteil gegenüber Mergesort: Kein zusätzlicher Speicher benötigt (ausser für Rekursion). 




## Serie 3

Die Aufgabe mit der Mastermethod war nicht optimal formuliert -> letzte Aufgabe hat keine Lösung mittels Mastermethod. 

Bei Induktuionsaufgaben immer Base-Case beweisen, falls dieser fehlt, ist der Beweis nicht vollständig.

Programmieraufgaben wurden grundsätzlich gut gelöst.


## Slides



## Serie 4

Double-Ended queue: Implementiert zuerst `push_back` (damit solltet ihr schon die "Appending"-Testcases bestehen), bevor ihr mit push_front anfangt.   


## Bonusaufgabe

Skipliste: Stellt sicher, dass ihr die Theorie hinter der Skipliste gut verstanden habt, bevor ihr mit Coden loslegt! Eine sinnvolle Darstellung (**Warnung**: Hier werden Duplikate nicht beachtet): https://cmps-people.ok.ubc.ca/ylucet/DS/SkipList.html

Auf jeden Fall: Zuerst `insert` korrekt implementieren (4 Test cases sollten dann stimmen), bevor du mit `erase` beginnst!