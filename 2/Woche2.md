# Woche 2


## Nachbesprechung Serie 1


### Asymptotic Growth

Wichtige Rechentricks:

* $\log{n^k} = k\log{n} \in \mathcal{O}(\log{n})$
* $\binom{n}{3} = \frac{n!}{(n-3)!3!}=\frac{n(n-1)(n-2)(n-3)!}{(n-3)!3!} = \frac{n(n-1)(n-2)}{3!} \in \mathcal{O}(n^3)$
* $n! = 1 \cdot 2 \cdot \dots \cdot n \leq n \cdot n \cdot \dots n = n^n$

### Prefix Sum 2D

Anmerkung I: 
In der Lösung wird der ternäre Operator `?` verwendet:
`int x = Ausdruck ? Wert1 : Wert2;`

Dies bedeutet: Falls `Ausdruck` wahr ist, erhält `x` den Wert `Wert1`, falls `Ausdruck` falls ist, `Wert2`. Warum ist das praktisch? 
``` C++
int x;
if(condition){
    x = Wert1;
}
else{
    x = Wert2;
}
```
wird zu einer Zeile Code.

Zur Wiederholung `vector.at(i)` wird hier verwendet. Dies führt einen range-Check aus und wirft eine `out_of_range` exception, falls i ein zu grosser Index ist. Dies hilft beim debuggen und vermeidet unklare Segementation Faults.
## Serie 2


### Sorting 

Probiert es einfach mal aus und schaut nicht direkt "gute" Sortieralgorithmen an.

### Vector Template

Wichtig: bei `sort` und `write` müssen auch die Funktionsparameter geändert werden (siehe `main` Funktion)

### Nested Vector 

1. Löse die Vector Template Aufgabe und kopiere deine Implementation in `vector.hpp`. 
2. Implementiere String mit deiner Vector-Klasse als privater Membervariable:
```C++
...
private: 
Vector<char> data;
};
```
Tipp: Die Klassenfunktionen von `String` können mit den entsprechenden Vector Funktionen implementiert werden.


### Sliding Window

Hier müssen alle 3 Varianten implementiert werden (und korrekt sein). Beim Sliding Window empfehle ich, erst einen pseudocode zu schreiben und diesen dann in C++ zu übersetzen.

### Induktionsbeweise

Wie bereits erwähnt prüfungsrelevant und müssen gut sitzen (auch für andere Fächer praktisch). Hier ist ein sauberer Aufschrieb wichtig.