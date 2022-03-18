# Woche 3

## Allgemeines

https://lec.inf.ethz.ch/past_exams/  
https://cadmo.ethz.ch/education/lectures/FS15/DA/Pruefungen.html (für BSc INFK, allerdings sind viele Aufgaben ähnlich) 

## Nachnachbesprechung Serie 1

Wichtig, denn einige haben die Logarithmen falsch angeordnet:
Sei $f(n)=\log^k{(n)}$ mit $k\in \mathbb{R}\geq1$ und $g(n)=n^x$ mit $x\in\mathbb{R}\geq1$. Dann ist $f\in\mathcal{O}(g)$ und $g\notin\mathcal{O}(f)$. In Worten: **Jeder Logarithmus wächst langsamer als jedes Polynom grösser gleich Grad 1, unabhängig vom Grad**

Beweise: In einem Prüfungssetting müsst ihr grundsätzlich "alles" beweisen, was ihr behauptet. Antworten wie "Ist falsch, da es der Definition widerspricht" sind in jedem Fall nicht ausreichend.

## Nachbesprechung Serie 2

Sliding Window: Kurz zusammen anschauen

## Theorie

### Rekurrenzgleichungen

Diese kommen **immer** an Prüfungen und sind fast immer von der Form.

$$
T (n) = \left\{
\begin{array}{ll}
\dots & n \geq 1 \\
C &  n = 1 \\
\end{array}
\right. 
$$
mit dem Ziel eine nicht-rekursive Funktion für $T(n)$ anzugeben. Oftmals ist n eine Potenz einer natürlichen Zahl, d.h. $n=m^k$ für $m, k \in \mathbb{N}$

Schritte:  
1. Falls n eine Potenz ist, dies so einsetzen (vereinfacht Rekursion).
2. Beginne die Rekursionsgleichung aufzulösen, d.h. setze $T(n)$ ein. "Sortiere" die Terme (wichtig, nicht vereinfachen!) und wiederhole, bis du ein Muster findest.
3. Sobald du das Muster hast, setze $n=1$ ein und vereinfache so weit wie möglich. 
4. Die resultierende Formel mittels Induktion beweisen. Dies kann entweder über $n$ oder $k$ geschiehen.
   1. Indukutionsanfang 
   2. Hypothese aufstellen
   3. Fall $k+1$ beweisen.

Ihr findet jede Menge Beispiele in alten Prüfungen.

### Sortieren

Ihr habt in der VL 3 verschiedene einfache Sortieralgorithmen gesehen:
1. Insertion sort: Füge immer in bereits sortierten Teil ein.
2. Selection sort: Suche das Minimum des unsortierten Teils und füge es am Ende des sortierten Teils ein.
3. Bubble sort: Falls Elemente falsch herum sind, tausche diese -> Maximum steigt nach oben wie eine Bubble.

Diese Algorithmen sind alle in $\mathcal{O}(n^2)$.

Es gibt Algorithmen, die in $\mathcal{O}(n \log n)$ sortieren. Die wichtigsten sind:
1. Merge sort: Sortiere kleine Arrays und fusioniere diese. 
2. Quick sort: noch nicht in VL besprochen. Quick sort kann im schlechtesten Fall quadratische Laufzeit haben.

Es gibt noch weitere Algorithmen, siehe z.B. https://en.wikipedia.org/wiki/Sorting_algorithm#Comparison_of_algorithms.

Defintion: Ein Sortieralgorithmus heisst **stabil**, falls die relative Position von zwei gleichen Elementen nicht geändert wird.  
Defintion: Ein **in-situ** Algorithmus benötigt nur konstant zusätzlichen Speicher.