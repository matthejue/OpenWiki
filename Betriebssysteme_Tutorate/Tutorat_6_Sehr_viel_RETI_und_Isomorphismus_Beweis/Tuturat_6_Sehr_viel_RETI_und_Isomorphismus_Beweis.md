---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 6, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #432c54; font-size: 80px; text-align: center; }
  h2 { color: #432c54; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #4d271f; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #432c54; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  h5 { color: #005f75; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  a { color: #432c54; }
  strong { color: #4d271f; }
  em { color: #432c54; }
  footer { color: #4d271f; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #432c54;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #c47f63;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #c47f63;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #c47f63;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }

---

# Tutorat 6 <!--fit-->
### Sehr viel RETI und Isomorphismus Beweis <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Klarstellung

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Klarstellung
### Nicht A oder B

- $a \Rightarrow b$: **Wenn** ihr weiter laut seid, **dann** rufe ich die Polizei
  - `if (sind_laut(Nachbarn)) { rufe(Polizei) }`
- $¬a \vee b$: **Entweder** ihr seid leise (**nicht** laut) **oder** ich rufe die Polizei
  - `¬sind_laut(Nachbarn) v rufe(Polizei)`
    - liegt am **ODER**
    - Wenn Bedingung `a` **false**, prüfe `b` **nicht** mehr, da bereits durch **Negation** des ersten **Atoms** gesamte Formel **true** (auch **Lazy Evaluation** genannt)
    - Wenn Bedingung `a` **true**, prüfe `b`, da erstes **Literal** false ist, aber mit dem zweiten **Literal** die Möglichkeit besteht **true** zu werden


<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Klarstellung
### Übungsblatt 5 Aufgabe 3 Korrektur

- siehe **korrigierte** Foliensatz

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vorbereitungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Vorbereitungen
### Funktionen
##### Definition
- auch **Abbildung**
- ordnet jedem Element $x$ einer **Definitionsmenge / Defintionsbereich** $D$ (Menge, auf der eine Funktion "definierbar" ist) genau ein Element $y$ einer **Zielmenge / Wertemenge / Wertebereich** $Z$ zu.
  - **Umkehrung gilt nicht:** Ein Element der Zielmenge kann genau einem, mehreren, aber auch keinem Element der Definitionsmenge zugeordnet sein
- für das dem Element $x\in D$ zugeordnete **Element der Zielmenge** schreibt man im Allgemeinen $f(x)$
- $f(x)=y\Leftrightarrow (x, y) \in f$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Definition
- $f:D\to Z$ ist Teil**menge** $f\subset D\times Z$, d. h. $f$ ist somit eine spezielle **Relation** zwischen $D$ und $Z$, die die folgenden Eigenschaften hat:
    - $f$ ist **[linkstotal](Relationen_injektiv_surjektiv_bijektiv.md)**: für jedes Element $x$ aus der **Definitionsmenge** $D$ existiert **mindestens** einen Funktionswert $y$ in $Z$
    - $f$ ist **[rechtseindeutig](Relationen_injektiv_surjektiv_bijektiv.md)**: zu jedem Element $x$ von der **Definitionsmenge** $D$ gibt es **höchstens** ein Element $y$ von $Z$


<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Bezeichnungen
$f(x)=y\Leftrightarrow\text{Funktion}(\text{Funktionsargument/unabhängige Variable})=\text{Funktionswert/abhängige Variable}$
- Elemente der **Definitionsmenge** heißen **Funktionsargumente**
- Elemente der **Zielmenge** heißen **Zielwerte**
- **Bildmenge (auch Bild) einer Funktion:** Teilmenge der Zielmenge, Menge der Bilder aller Elemente der Definitionsmenge ($D$ ($f(D)=\{f(x) \mid x \in D\}$)
  - Element der Bildmenge heißen **Funktionswerte** / **Bildelemente** / **Bilder** (diejenigen Elemente von $Z$, die tatsächlich auch als Bild eines Funktionsarguments auftreten)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Bezeichnungen

- **Bildmenge (auch Bild) von S:** Teilmenge der Bildmenge der Funktion, Menge der Bilder der Elemente aus der Definitionsmenge, die in der Teilmenge S sind, welche auch nur aus einem einzigen Funktionsargument bestehen kann ($f(S)=\{f(x) \mid x \in S\}, \quad S\subseteq D$)
  - auch als **Einschränkung auf Teilemgen $S$ der Defintinsmenge** bezeichnet
- **Urbild einer Teilmenge $T$ der Zielmenge:** Menge aller Elemente der Definitionsmenge, deren Bild Element dieser Teilmenge $T$ ist ($f^{-1}(T)=\{x \in D \mid f(x) \in T\}$)
- bei einer Funktion ist Urbild der gesamten Zielmenge = der gesamten Definitionsmenge, weil Funktionen linkseindeutig sind. Daher nennt man die Definitionsmenge auch **Urbildmenge**

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Bezeichnungen

![_2021-12-08-21-14-03](_resources/_2021-12-08-21-14-03.png)
- **Faser / Urbild $f^{-1}(y)$ eines Elements $y$ der Zielmenge**: Menge aller Elemente der Definitionsmenge, deren Bild $y$ ist ($f^{-1}(\{y\})=\{x \in D \mid f(x)=y\}$)
- Elemente der Urbildmenge heißen **Urbilder** (bzw sind =Funktionsargumente)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Funktion und keine Funktion

![_2021-12-08-22-46-16](_resources/_2021-12-08-22-46-16.png) ![_2021-12-08-22-46-34](_resources/_2021-12-08-22-46-34.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Multi- und Partielle Funktionen
- **Partielle Funktion:** $f: X\rightharpoonup Y$
  - **rechtseindeutige** (aber **nicht** umbedingt **linkstotale**) Relation
  - es darf Elemente der Definitionsmenge geben, denen kein Wert der Zielmenge zugeordnet ist
- **Multifunktion:** $f: X \multimap Y$
  - **linkstotale** (aber **nicht** umbedingt **rechtseindeutige**) Relation
  - Elemente der Definitionsmenge X können auf mehrere Elemente der Zielmenge Y abgebildet werden
- um normale Funktionen: $f: X\to Y$ zu unterscheiden, bezeichnet man sie auch als **totale Funktionen**

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Schreibweisen
  - $f(x)=x^2,\quad x\in \{1, 2, 3, 4\}$ (Funktionsgleichung mit Definitionsmenge)
  - $f: \{1, 2, 3, 4\}\to \{1, 4, 9, 16\}, (x)\mapsto (x^2)$ (eindeutige Zuordnungsvorschrift mit Definitions- und Zielmenge)
  - $f = \{(1,4),(2,3),(3,2),(4,1)\}$ (als Relation)
  - $f(x)=
  \begin{cases}
  1 & \text { falls} & x=1 \\
  x^2 & \text { falls} & 2\le x\le3 \\
  16 & \text { falls} & x\ge4
  \end{cases}, \quad x\in\{1, 2, 3, 4\}$ (als Fallunterscheidung)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Injektivität, Surjektivität, Bijektivität

- **Injektivität/Linkseindeutigkeit:** Wenn jedes Element der <u>Zielmenge</u> höchstens ein Urbild
  - $f\left(x_{1}\right)=f\left(x_{2}\right)$ $\Rightarrow$ $x_{1}=x_{2}$
- **Surjektivität/Rechtstotalität:** Wenn jedes Element <u>der Zielmenge</u> mindestens ein Urbild hat
  - $\forall y\in Y\exists x\in X:f(x)=y$
  - Surjektive Funktion $f: X \rightarrow Y$ zwischen endlichen Mengen, dann kann $Y$ höchstens so viele Elemente wie $X$ haben, es gilt also $|Y| \leq|X|$
- **Bijektivität:** Wenn sie injektiv und surjektiv ist (wenn jedes Element der Zielmenge genau ein Urbild hat)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Injektivität, Surjektivität, Bijektivität

![_2021-12-08-22-53-42](_resources/_2021-12-08-22-53-42.png) ![_2021-12-08-22-53-56](_resources/_2021-12-08-22-53-56.png) ![_2021-12-08-22-54-07](_resources/_2021-12-08-22-54-07.png)

> beim Funktionsbegriff beziehen sich **Linkstotalität** und **Rechtseindeutigkeit** auf die **Definitionsmenge**, hier bezieht sich alles auf die **Zielmenge**
<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Funktionen
##### Homomorphismen
- **Struktur**: $\mathcal{S}=\left(S,\left\{c_{i}^{\mathcal{S}}\right\}_{i \in I},\left\{f_{j}^{\mathcal{S}}\right\}_{j \in J},\left\{R_{k}^{\mathcal{S}}\right\}_{k \in K}\right)$, *Bsp.*: $G = (V, R, α, ω)$
  - **Konstantenzeichen**, **Funktionszeichen**, **Relationszeichen**, die sich alle innerhalb der **Grundmenge** $S$ bewegen
-  $F\left(c^{\mathcal{A}}\right)=c^{\mathcal{B}}$;
- $F\left(f^{\mathcal{A}}\left(a_{1}, \ldots, a_{n}\right)\right)=f^{\mathcal{B}}\left(F\left(a_{1}\right), \ldots, F\left(a_{n}\right)\right)$
- $\left(a_{1}, \ldots, a_{m}\right)\in R^{\mathcal{A}}$ *gdw.* $\left(F\left(a_{1}\right), \ldots, F\left(a_{m}\right)\right)\in R^{\mathcal{B}}$
- **Monomorphismus** (auch **Einbettung**): ist **injektiver** Homomorphismus
- **Isomorphismus**: ist **bijektiver** Homomorphismus, $\mathcal{A} \simeq \mathcal{B}$
  - **Isomorphie** $\Rightarrow$ **Elementare Äquivalenz** (erfüllen dieselben Aussagen)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Strukturen
##### Monoid $(M, \circ)$
  - **Assoziativgesetz:** $(a \circ b) \circ c=a \circ(b \circ c)$
  - **neutrales Element:** $n \circ a=a \circ n=a,\quad n\in G$

##### $(G, \circ)$ (Monoid, in dem jedes Element invertierbar ist)
- wobei $a \circ b \in G, \quad \forall a, b, c\in G:$
- **Assoziativgesetz:** $(a \circ b) \circ c=a \circ(b \circ c)$
- **neutrales Element:** $n \circ a=a \circ n=a,\quad n\in G$
- **inverses Element:** $\forall a\exists! i(a):a \circ i(a)=i(a) \circ a=n$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Strukturen
##### Körper $(\mathbb{K}, +, \cdot)$
- $\forall a, b, c\in \mathbb{K}:$
- kommutative Gruppe $(\mathbb{K}, +)$ mit neutralem Element $0$
- kommutative Gruppe $(\mathbb{K}\setminus\{0\}, \cdot)$ mit neutralem Element $1$
- **Distributivgesetz:** $a \cdot b+a \cdot c=a \cdot(b+c)$
  - regelt, wie die beiden Verknüpfungen sich miteinander vertragen

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Strukturen
##### Ring $(R, +,\cdot)$
- $\forall a, b, c\in R:$
- kommutative Gruppe $(R, +)$ mit neutralem Element $0$
- **Assoziativgesetz:** $(a \cdot b) \cdot c=a \cdot(b \cdot c)$
- **Distributivgesetz:** $a \cdot b+a \cdot c=a \cdot(b+c)$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten

- auch "zeigen" oder "nachweisen", statt "beweisen"
- $A\Rightarrow B$ ist meist nur eine kurzschreibweise für $\forall x\in M: A(x)\Rightarrow B(x)$
- **Voraussetzungen** und **Konklusion**, in Form einer **Behauptung** (wo man $Z\hspace{-0.25em}\raisebox{-0.25em}Z:$ davor schreibt) sind gegeben
  - es gibt neben **expliziten Voraussetzungen** auch **implizite Voraussetzungen**, die nicht ausdrücklich genannt werden (Rechenregeln und Standard-Definitionen)
  - in der **Behauptung** steht immer eine wahre Aussage. Hat man eine Aussage, die nicht wahr ist, muss man sie negiert in die Behauptung schreiben

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten

- gesucht wird ein **Beweis**, der zeigt, dass zwischen den vorgegebenen Voraussetzungen und der vorgegebenen Behauptung eine logische Folgerungsbeziehung besteht
  - man muss nachweisen, sofern die Voraussetzungen erfüllt sind, ist garantiert, dass die Behauptung ebenfalls gilt
  - **Beweissuche** mithilfe von **Vorwärs- und Rückwärtsschließen**, sowie **bidirektionaler Suche** und **Beweispräsentation** können sich sehr unterscheiden
- $q.e.d.$ für **quod erat demonstrandum** ("was zu beweisen war")

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Schließen
##### Deduktives Schließen
##### ![_2021-12-09-00-16-10](_resources/_2021-12-09-00-16-10.png)
- meist vom **Allgemeinen** zum **Speziellen**
- Voraussetzungen müssen nicht umgedingt wahr sein
  - im obigen Beispiel ist die Voraussetzung $(i)$ falsch, trotzdem besteht logische Folgerungsbeziehung zwischen Voraussetzungen und Konklusion
  - es ist unmöglich, dass die Voraussetzungen wahr und die Konklusion falsch ist
- Mathematisches Beweisen beruht meistens darauf

<!--small-->
![bg right:10%](_resources/background_2.png)

---
## Vorbereitungen
### Schließen
##### Induktives Schließen
##### ![_2021-12-09-00-16-25](_resources/_2021-12-09-00-16-25.png)
- vom **Speziellen** zum **Allgemeinen**
- bei erfüllten Voraussetzungen ist eine induktive Konklusion nicht mit Sicherheit wahr. Sie ist nur mehr oder weniger wahrscheinlich. Man schließt aus Einzelfällen auf ein allgemeines Gesetz
- bei **vollständiger Induktion** besteht Grundidee darin, nicht nur einige Einzelfälle zu betrachten, sondern tatsächlich alle. Wenn die Induktion in diesem Sinne vollständig ist, gilt bei erfüllten Voraussetzungen zwangsläufig auch die Konklusion

<!--small-->
![bg right:10%](_resources/background_2.png)

---
## Vorbereitungen
### Schließen
##### Vorwärtsschließen

- geht von Voraussetzungen aus und erschließt daraus die Behauptung. Beginnend mit Voraussetzungen folgen also Beweisschritte, bis die Behauptung dasteht.

##### Rückwärtsschließen

- beginnt mit der Behauptung und verfolgt rückwärts die Argumentketten, mit denen die Behauptung bewiesen wird, bis diese Ketten mit Voraussetzungen enden

##### Bidirektionales Schließen

- Mischformen von Vorwärts- und Rückwärtsschließen. Auch bidirektionale Suche genannt, da es meistens zur Beweissuche dient

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten

- **Deduktive Kette** (Beweis durch "Ausrechnen")
  - Behauptung ist Gleichung
  - kann zu **Deuktivem Netz** werden:
  ![_2021-12-09-01-51-34](_resources/_2021-12-09-01-51-34.png)
- **Implikationsbeweis**, $\mathcal{F}\Rightarrow\mathcal{G}$
  ![_2021-12-09-00-41-45](_resources/_2021-12-09-00-41-45.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten
- **Allbeweis**, $\forall x\;\mathcal{F}(x)$
  ![_2021-12-09-00-40-33](_resources/_2021-12-09-00-40-33.png)
  - Beweis durch **Fallunterschiedung**, $((A \rightarrow B) \wedge(\neg A \rightarrow B)) \rightarrow B$
  - Beweis durch **Vollständige Induktion**
- **Existenzbeweis**
  - ohne $\forall$-Vorspann: $\exists x\;\mathcal{F}(x)$
  - mit $\forall$-Vorspann: $\forall x\exists y\;\mathcal{F}(x, y)$
  - *konstruktiv* oder *nicht-konstruktiv*

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten
- **Äquivalenzbeweis**, $\mathcal{F}\Leftrightarrow\mathcal{G}\equiv(\mathcal{F}\Rightarrow\mathcal{G})\wedge(\mathcal{G}\Rightarrow\mathcal{F})$
  ![_2021-12-09-00-44-00](_resources/_2021-12-09-00-44-00.png)
  - Beweis durch **Ringschluss**, bei z.B. $(\mathcal{F_1}\Leftrightarrow\mathcal{F_2})\wedge(\mathcal{F_1}\Leftrightarrow\mathcal{F_3})\wedge(\mathcal{F_2}\Leftrightarrow\mathcal{F_3})$ bräuchte man damit nur $3$ Teilbeweise, anstatt $6$ (wenn man das erste Beweissschema drei Mal verwenden würde)
  ![_2021-12-09-00-45-13](_resources/_2021-12-09-00-45-13.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweisarten
- **Beweis durch Kontraposition**, $\mathcal{F}\Rightarrow\mathcal{G}\Leftrightarrow¬\mathcal{F}\vee\mathcal{G}\Leftrightarrow¬¬\mathcal{G}\vee¬\mathcal{F}\Leftrightarrow¬\mathcal{G}\Rightarrow¬\mathcal{F}$
  ![_2021-12-09-00-45-49](_resources/_2021-12-09-00-45-49.png)
- **Widerspruchsbeweis**, $V\Rightarrow B\Leftrightarrow ¬V\vee B\Leftrightarrow¬(V\wedge ¬B)\Leftrightarrow(V\wedge¬B\Rightarrow\bot)$
![_2021-12-09-00-46-14](_resources/_2021-12-09-00-46-14.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Beweise
##### Begriffe
- **Ohne Beschränkung der Allgemeinheit:**
  - abgekürzt **o. B. d. A.**
  - eine Einschränkung führt nur zur *Vereinfachung* (z.B. bei Symmetrie) der Beweisführung (Verringerung der Schreibarbeit), ohne dass die *Gültigkeit* der im Anschluss getroffenen Aussagen in Bezug auf die *Allgemeinheit darunter leidet
- **(fest aber) beliebig:** "'fest' hat darin *keine Bedeutung*. Es stellt bestenfalls eine Erklärung des Autors dar, dass dieses Symbol, wenn es später wieder auftaucht, *dieselbe Bedeutung* haben soll – das ist aber eine *Selbstverständlichkeit*, die man wirklich nicht zu betonen braucht!" (*Quelle:* Prof. Dr. Albrecht Beutelspacher - „Das ist o.B.d.A. trivial!“ Eine Gebrauchsanleitung zur Formulierung mathematischer Gedanken[...])
<!--small-->
![bg right:10%](_resources/background_2.png)

---
<!--  -->
<!-- ## Vorbereitungen -->
<!-- ### Beweisarten -->
<!-- ##### Beispiel für Beweis (Deduktive Kette) -->
<!--  -->
<!-- ##### ![_2021-12-09-01-15-00](_resources/_2021-12-09-01-15-00.png) -->
<!--  -->
<!-- [>small<] -->
<!-- ![bg right:10%](_resources/background_2.png) -->
<!--  -->
<!-- --- -->

## Vorbereitungen
### Addition binär und dezimal
```text
  011011 (27)            17718
+ 011101 (29)          +  6524
  11111                  11 1
  ======                ======
  111000 (56)            24242
```
```
00 + 00 = 00               00 + 00 (+ 01) = 01
00 + 01 = 01               00 + 01 (+ 01) = 10
01 + 00 = 01               01 + 00 (+ 01) = 10
01 + 01 = 10               01 + 01 (+ 01) = 11
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Subtraktion binär und dezimal (nicht empfohlen, dient Vergleich mit nächster Folie)
```text
(1)
  0111000 (56)         24242
- 0011011 (27)       - 17718
   11111               11 1
  =======             ======
  0011101 (29)          6524
```
```
10 - 00 = 10                10 - 00 (- 01) = 01
10 - 01 = 01                10 - 01 (- 01) = 00
11 - 00 = 11                11 - 00 (- 01) = 10
11 - 01 = 10                11 - 01 (- 01) = 01
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Subtraktion  binär und dezimal (funktioniert immer, egal was für Vorzeichen Zahlen haben)
```text
(2)
   0111000 (56)
 + 1100101 (27) (0011011 negiert und +1)
  11
   =======
   0011101 (29)
```
- **Zweierkomplement Negation:** `11011 -> 011011 -> 100100 -> 100101`
  - `0`en hinzufügen bis **Minuend** und **Subtrahend** beide gleiche Länge haben und Platz für ihr **Vorzeichenbit** ist und dieses korrekt gesetzt ist
  - **1er Komplement Negation** und `+1` nicht vergessen für den **Subtrahenden**

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Multiplikation binär und dezimal
```text
1101 x 1001 (13 * 9)          1304 x 12
       1101                          48
      0000                       +   0
     0000                        + 36
    1101                         +12
   ========                      ======
    1110101 (117)                 15648
```
- **Verschiebung** ist aufgrund der `0`en, die hier ausgelassen sind

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Division binär
```text
  1110101 / 1011 (117 : 11) = 1010 (10) Rest: 111 (7)
- 1011|||
 =====|||
    111||
-     0||
   ====||
    1110|
-   1011|
   =====|
      111
-       0
     ====
      111
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Division dezimal
```text
15658 / 12 = 1304,833...
12|||
==|||
 36||
 36||
 ==||
  05|
   0|
  ==|
   58
   48
   ...
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Division dezimal
```text
   ==
   10|0  oder Rest: 10
    9 6
    ===
      40
      36
      ==
       40
       36
       ==
        4...
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vorbereitungen
### Division binär
- bei **binärer Division** gibt es nur **2 Zustände** (`1` oder `0`), dementsprechend wird entweder die Zahl so übernommen (Zahl $\cdot$ `1`) oder die Zahl ist `0` (Zahl $\cdot$ `0`)

### Division allgemein
- nach jeder Addition ein Zahl runterholen, bis keine mehr runtergeholt werden kann $\to$ dann Ende (bei **ganzzahliger Division**). Was unten stehen bleibt ist der **Rest**
- bei Division mit Nachkommastellen, 0en runterbringen, bis einmal **kein Rest** mehr rauskommt oder Grenze setzen bis zu der man weiter macht $\to$ dann Ende
- ist der **Dividend** trotz runtergebrachter weiter Stelle (weil einmal kein Rest übrig blieb) immernoch kleiner als der **Divisor**, so ist der **Quotient** $0$, weil nur durch $\cdot 0$ rechnen kann der **Divisor** noch kleiner sein als der **Dividend**


<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Übungsblatt
### Aufgabe 1
- PicoC-Compiler Binary **herunterladen**
- `nvim input.picoc`
  - `:set paste`
  - Code aus Übungsblatt **kopieren** und mit `"*p` **pasten**
  - Code mit `shift + v` und `<` bzw `>` im **Visual Mode** schön formatieren, `]<space>`
  - `:wq`
- `./pico_c_compiler.exe -S -v -p -s 128 -e 256 input.picoc output.reti`
  - `./pico_c_compiler.exe -h`
- `.reti`-Outputdatei wird später auf **Nextcloud** Server hochgeladen

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2
- **Lösung** von **Emre** und **Taha** wird später auf **Nextcloud** Server hochgeladen
```
void main() {
  int x = 42;
  int y = -24;
  char is_less = 0;
  // ...
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2
```
  if((x > 0) ^ (y > 0)) {
    is_le = x <= y;
  } else {
    if (x > 0) {
      // x >= 0 -> y < 0 implies x --y <= 0 implies x <= -y
      is_le = 0
    } else {
      // x < 0 -> y >= 0 implies -x - y <= implies -x <= y
      is_le = 1
    }
  }
}
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 3

- **Isomorphismus** $F: \left(k_{1}, \ldots, k_{n}\right) \mapsto a+\sum_{i=1}^{n}\left(\prod_{j=i+1}^{n} s_{j}\right) \cdot k_{i}$ von Struktur $\mathcal{A}=(\N^n, 0^{\mathcal{A}}, +^{\mathcal{A}})$ nach $\mathcal{B}=(\N, 0^{\mathcal{B}}, +^{\mathcal{B}})$
- **Deduktives Netz:** Funktion **bijektiv** gdw. **injektiv** und **surjektiv**
- Beweis der Injektivität durch **Beweis durch Kontraposition:**
  - $f(x)=f(y) \Rightarrow x=y$ wird umgeformt zu $x \neq y \Rightarrow f(x) \neq f(y)$
  - $f(x) \neq f(y)$ wird umgeformt zu $f(x) - f(y) \neq 0$ bzw. $f(x) - f(y) > 0$
- **Voraussetzungen:**
  - $\text { Sei } l \text { minimal mit } k_{l} \neq h_{l} . \text { O.B.d.A. gelte } k_{l}<h_{l} \text { und } k_{1}=h_{1}, \ldots, k_{l-1}=h_{l-1}$
- **Behauptung:**
  - $Z\hspace{-0.25em}\raisebox{-0.25em}Z:$ $\left(k_{1}, \ldots, k_{n}\right) \neq\left(h_{1}, \ldots, h_{n}\right) \Rightarrow \left(k_{1}, \ldots, k_{n}\right) \neq \operatorname{ind}\left(h_{1}, \ldots, h_{n}\right)$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 3
##### Teilbeweis (1/2) der Linkseindeutigkeit (Injektivität)
$$
\begin{aligned}
\operatorname{ind}\left(h_{1}, \ldots, h_{n}\right)-\operatorname{ind}\left(k_{1}, \ldots, k_{n}\right) &=\\
 \sum_{i=1}^{l-1}\left(\prod_{j=i+1}^{n} s_{j}\right) \cdot\underbrace{\left(h_{i}-k_{i}\right)}_{0} + \sum_{i=l}^{n}\left(\prod_{j=i+1}^{n} s_{j}\right) \cdot\left(h_{i}-k_{i}\right) + \underbrace{a - a}_{0} &= \\
\sum_{i=l}^{n}\left(\prod_{j=i+1}^{n} s_{j}\right) \cdot\left(h_{i}-k_{i}\right) &\geq \\
\prod_{j=l+1}^{n} s_{j}+\sum_{i=l+1}^{n}\left(\prod_{j=i+1}^{n} s_{j}\right)\cdot\left(h_{i}-k_{i}\right) &\geq \\
\end{aligned}
$$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 3
$$
\begin{aligned}
\prod_{j=l+1}^{n} s_{j}+\sum_{i=l+1}^{n}\left(\prod_{j=i+1}^{n} s_{j}\right)\left(-s_{i}+1\right) &>\\
\prod_{j=l+1}^{n} s_{j}+\sum_{i=l+1}^{n-1}\left(\prod_{j=i+1}^{n} s_{j}\right)(-s_{i} + 1)+\left(-s_{n}\right) &= \\
\prod_{j=l+1}^{n} s_{j}+\sum_{i=l+1}^{n-2}\left(\prod_{j=i+1}^{n} s_{j}\right)\left(-s_{i}+1\right)+\left(-s_{n-1}\right) s_{n} &= \\
\ldots&=\\
0
\end{aligned}
$$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 3
##### Teilbeweis (2/2) der Rechtstotalität (Surjektivität)
- Da **Definitionsmenge** und **Wertemenge** gleich groß sind und die Abbildung $ind$ **injektiv** ist, ist sie auch **surjektiv**

##### Beweis des Isomorphismus
- Aus der **Linkseindeutigkeit** und **Rechtstotalität** des **Homomorphismus** folgt, dass es sich hierbei um einen **Isomorphismus** handelt

**q.e.d.**

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Ergänzungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Ergänzungen
### Packages installieren mit `apt`
##### updating
- `sudo apt update`: update package lists
- `sudo apt update -y && sudo apt full-upgrade`:
##### ![[_2021-11-11-00-32-09](_2021-11-11-00-32-09)](_resources/_2021-11-11-00-32-09.png)
- `sudo apt update -y && sudo apt full-upgrade qutebrowser`: update a program
>- `full-upgrade` is the recommended way over `upgrade`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`
##### installing
- `sudo apt update -y && sudo apt install gcc -y`: install package from repo
- `sudo apt update -y && sudo apt install ./foo_1.0_all.deb -y`: install local package

##### removing
- `sudo apt update -y && sudo apt purge gcc -y`: uninstalls package, es werden alle Konfigurationsdateien gelöscht
- `sudo apt update -y && sudo apt autoremove -y` uninstalls all packages, that are not needed anymore and have no dependencies to other packages
>- `purge` is the recommended way over `remove`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`


##### searching
- autocomplete application name, e.g. `sudo apt install openjdk`, double tab
- `apt list gcc`: lists als packages with which fit the search term
- `apt list gcc --installed`: only list packages that are installed
- `apt show gcc`:  shows desciption of package matching the search term
- `apt search gcc`: lists alls packages which the search term in their discription or name
>- glob-pattern or regex as search pattern

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`

##### other
- `sudo apt download emacs`: download `.deb`-package
- `sudo apt install alacritty -y`: no `y` each time
- `sudo do-release-upgrade`: upgrade **Distro** to a newer release
>- instead of confirming with y, once can also just spam enter
>- access packages over `/var/cache/apt/archives`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`

##### comparisson to apt-get
![width:1000px](_resources/_2021-11-11-00-31-15.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Synchronising with the repositories
- `sudo pacman -Sy`: As new packages are added to the repositories you will need to regularly synchronise the package lists. This will only download the package lists if there has been a change (sudo apt update)
- `sudo pacman -Syy`: Occasionally you may want to force the package lists to be downloaded

##### Updating software
- `sudo pacman -Su`: perform an update of software already installed (sudo apt upgrade)
- `sudo pacman -Syu`: check whether the package lists are up-to-date at the same time

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Searching for software
- `pacman -Ss ^hunspell`: searching a package by name in repos. Supports Regex
- `pacman -Qs hunspell`: searching package locally
- `pacman -Q`: list all packages installed on computer
- `pacman -Qeq`: self installed programs (e), only the program names, not the version number (q)
- `pacman -Qen`: packages self installed from main repos (n)
- `pacman -Qem`: packages self installed from aur (m)
- `pacman -Qdt`: orphans, unneeded dependencies

##### Find out where package installed
- `pacman -Ql handbrake`: look up where application gets installed

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Installing software
- `sudo pacman -S gimagereader-gtk`: install package from repo
- `sudo pacman -U /var/cache/pacman/pkg/rofi-1.6.1-1-x86_64.pkg.tar.zst`: install local package

##### Removing software
- `sudo pacman -Rns dmenu`: remove a package (R), dependencies (s) and configuration files (n)
- `sudo pacman -Rns $(pacman -Qtdq)`: if at a later date you want to remove all orphan packages and configuration files for packages that you removed some time ago
- `sudo pacman -Sc`: remove unused packages and repos from cache

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Finding out version number of local and remote packages
- `pacman -Qi python`: for **local** packages
- `pacman -Si python`: for **remote** packages

<!--small-->
![bg right:10%](_resources/background_2.png)

##### Misc
- If a package in the list is already installed on the system, it will be reinstalled even if it is already up to date. This behavior can be overridden with the `--needed` option.

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Prinzip
- capital letter at beginning
- `S`: sync with repository in some way
- `Q`: search locally
- `R`: remove

##### Yay
- commands are the same as in `pacman`
- adds search in the **AUR (Arch User Repository)**: https://aur.archlinux.org/ (**Duckduckgo:** `!au`)
- `yay polybar` erlaubt auswahl an packages, die z.B. Discord im Namen haben

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Anmerkungen
- **PAC**kage **MAN**ager
- always make `sudo pacman -Syu` before installing new software

##### Edit configuration files
- `sudo nvim /etc/pacman.conf`
![height:150px](_resources/_2021-11-11-00-55-04.png)
- `sudo nvim /etc/pacman.d/mirrorlist`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Quellen
### Wissenquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Quellen
### Bildquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->
