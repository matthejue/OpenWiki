# Aufgabe 1
## a)
-1 ich bin mir sicher, ihr habt es verstanden, aber das ganze ist etwas zu unkonkrett -> Konkrett sagen, dass ein Prozess i = j-1 Zeile 15 ausführt, dann Prozess j=i+1 Zeile 15 ausführt, dann haben beide das glecihe mein_i und führen dann beide Zeile 16 aus, Wodruch i = i_old+2 ist, also i_old+1 wird übersprungen

Bei 2 parallel laufenden Prozessen fällt mir kein Problem auf, wenn aber 3 oder mehr Prozesse
parallel laufen, kann es Probleme geben.

# b)
-4 so ist gar keine Parellelität mehr möglich.
Man will doch gerade, dass mehrere Prozess gleichzeitig Zeile 17 -21 ausführen. Bei eurer Lösung kann nur ein Prozess zur selben Zeit in der Schleife sein -> da kann man es auch gleich mit der Parellelität lassen und die komplizierte_funktion einfach nacheiannder für die Paare aus Vektor a und b ausführen
+0.5 für die Mühe

Zeile 15 und 16 müssten atomar in einem Zug bearbeitet werden, ohne, dass ein andere Prozess dazwischenfunken kann -> daher mit einem Mutex sicherstellen, dass da auch nur einer rein kann und raus kommt, bevor ein andere rein kann

# Aufgabe 2
## b)
-0.5
Prozess A muss einfach nur in Warteschleife an vorderster Stelle sein
Der andere Prozess B muss dann A mit seinem up() aufwecken. A wird sich nicht  selber mit up() aufwekcen könne, da es ja schläfft

-0.5 nach Wikipedia ist eine Queue definiert als:
"Eine Warteschlange (Queue) kann [...] eine beliebige Menge von Objekten aufnehmen und gibt diese >> in der Reihenfolge ihres Einfügens << wieder zurück."
aber später steht auch:
"Warteschlangen kann man sich als Bücherstapel vorstellen, die von unten befüllt werden. Dementsprechend gibt es Implementierungen, die >> gar keinen prinzipiellen Unterschied zwischen Stacks und Queues machen <<."
--> Da habt ihr recht n_n

# Aufgabe 3
## b)
"Drei Arbeiter sollen >> möglichst schnell << eine Maschine warten"
--> entweder A oder B unnötig festgehalten

Und funktioniert auch nicht, weil wenn C ganz schnell up() ausführt und direkt down(), dann ist die Maschine wieder an, bevor überhaupt irgendeiner der Arbeite seine Knochen bewegt hat.

sonst kann nicht sichergestellt wäre, dass vor dem Einschalten der Maschine die Arbeiten der anderen Arbeiter fertiggestellt wurden.
