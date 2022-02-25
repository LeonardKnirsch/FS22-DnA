# Übung 1

## Big-O notation

Hier die "genaueste" Grenze angeben. Beispiel:
$ f \in \mathcal{O}(2 n) \Rightarrow f \in \mathcal{O}(n)$


## Asymptotic Growth
Diese Aufgabe kommt häufig an Prüfungen.

## The set Theta

## Some proofs

Falls ihr etwas als falsch zeigen wollt, reicht ein Gegenbeispiel.

## Code Snippets Running Times

Diese Aufgabe kommt häufig an Prüfungen.

## Prefix Sum in 2D 

Allgemeine Anmerkungen: Bitte schreibt vernünftigen Code mit Kommentaren und ohne `int temp`, `goto` etc. 

Hier würde ich wie folgt vorgehen (es gibt natürlich noch andere Methoden):
1. Constructor der Klasse implementieren: Präfixsummenmatrix erstellen, diese befüllen, dabei folgende Fälle unterscheiden:
* `i > 0 && j > 0` (d.h. Feld nicht am Rand)
* `i == 0 && j > 0` (d.h. Feld an Kante)
* `i > 0 && j == 0` (d.h. Feld an Kante)
* `i == 0 && j == 0` (d.h. Feld in Ecke)
2. Implementation von `sum`: Dies sollte nun in konstanter Zeit möglich sein. Auch hier wieder die gleichen Fälle wie oben unterscheiden. 

Du kannst dir sonst 1DPrefixSumSol anschauen.