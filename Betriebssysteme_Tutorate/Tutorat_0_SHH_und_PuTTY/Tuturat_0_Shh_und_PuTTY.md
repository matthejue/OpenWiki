---
theme: gaia
paginate: true
backgroundColor: #ffffff
footer: Betriebssysteme, Tutorat 0, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #9c49ac; font-size: 80px; text-align: center;}
  h2 { color: #9c49ac; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #c53465; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: ##9c49ac; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #9c49ac; }
  strong { color: #c53465; }
  footer { color: #c53465; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; }
  ul li::before {
    content: "\1F784";
    color: #c53465;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #c53465;
      font-weight: bold;
    text-shadow: 0 0 8px #000;
  }
  code {
    background: #d9829f;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #d9829f;
    --color-highlight: #F96;
    --color-dimmed: #888;
  }

---

# Tutorat 0 <!--fit-->
### SSH und PuTTY <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Organisatorisches

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Organisatorisches
### Studienleistung

- Anmeldezeitraum 18.10.2021 -12.02.2022
- Anmelden zur **Studienleistung** in HISinOne
- Voraussetzung zur Anmeldung zur Studienleistung ist **Anmeldung zur Übung** in HISinOne
- **12** von **15** Übungsblättern sinnvoll bearbeitet
- Regelmäßige **aktive Teilnahme** an den Tutoraten
  - aber **keine** Anwesenheitspflicht!
  - **Vorrechnen** freiwillig

**➡** zeigt einfach, dass ihr bemüht seid :thumbsup:

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Organisatorisches
### Tutorat und Repository
- **Uhrzeit:** `8:15` bis `9:30` (`8:00` s.t geht auch, da ich sowieso da bin)
- **Repository:** https://github.com/matthejue/OpenWiki/tree/master/Betriebssysteme_Tutorate

#### ![height:250px](_resources/_2021-10-28-21-15-26.png)
#### Folien downloaden

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# SSH

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## SSH
### Mit Server verbinden über PuTTY
- **Uni-Account:** `ssh ab123@login.uni-freiburg.de`
  - Passwort, dass man bei **HISinOne**, **Ilias** usw. eingibt
- **Poolaccount:** `ssh <poollogin>@login.informatik.uni-freiburg.de`
  - Passwort, dass man an den **PoolPC's** eingibt
  - Zugriff auf Daten von **Poolaccount** möglch

#### ![height:150px](_resources/_2021-10-28-21-07-34.png)
#### PuTTY

- zum **Verlassen** `exit` eingeben

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## SSH
### Es sich bequem machen (keine Domain angeben)
- `~/.ssh/config`:
  ```
  HostName login.uni-freiburg.de
      Host uni
      User ab123

  Host tf
      HostName login.informatik.uni-freiburg.de
      User <poollogin>
  ```
- `ssh uni` oder `ssh tf` und dann da enstprechende **Passwort** eingeben

---

## SSH
### Es sich bequem machen (kein Passwort durch SSH Keypair)
- Passwort generieren

---

# Linux Überblick

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---
## Linux Überblick
### Linux Grunddaten
- **L**inus Torvalds + **Unix** **➡ Linux**
- Tux

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### GNU+Linux 1 von 2
- "To be fair, I'd just like to interject for a moment. What you’re referring to as Linux, is in fact, GNU/Linux, or as I’ve recently taken to calling it, GNU plus Linux. Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX. Many computer users run a modified version of the GNU system every day, without realizing it. Through a peculiar turn of events, the version of GNU which is widely used today is often called “Linux”, and many of its users are not aware that it is basically the GNU system, developed by the GNU Project. There really is a Linux, and these people are using it, but it is just a part of the system they use. [...]


<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### GNU+Linux 2 von 2

- [...] Linux is the kernel: the program in the system that allocates the machine’s resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. Linux is normally used in combination with the GNU operating system: the whole system is basically GNU with Linux added, or GNU/Linux. All the so-called “Linux” distributions are really distributions of GNU/Linux."

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### Linux in Zahlen

![height:400px](_resources/_2021-10-26-20-56-12.png)

#### https://netmarketshare.com/operating-system-market-share

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### Begriffe 1 von 4

- **Distributionen:** Arch, Manjaro, Linux Mint, Ubuntu, NixOS, Debian, Gentoo, LFS
  - https://upload.wikimedia.org/wikipedia/commons/1/1b/Linux_Distribution_Timeline.svg

#### ![height:250px](_resources/_2021-10-27-01-31-18.png)
#### https://distrowatch.com/dwres.php?resource=family-tree

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### Begriffe 2 von 4

- **Desktopenvironment:** KDE, Gnome, Cinnamon, XFCE, Deepin
  - **Window manager:** **➡** Fenster managen
    - i3, dwm, Bspwm, KWin (KDE), Qtile, awesome
    - Stacking, Tiling, Dynamic window manager
- **Terminal** vs **Terminal Emulator**
  - **Shell:** Zsh, Bash, Fish, (Powershell, Batch **➡** Windows)
- **Package Manager:** pacman, yay (AUR), apt, [...] sudo make install

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### Begriffe 3 von 4

- **X11:** **➡** Netzwerkprotokoll
  - **Compositor** **➡** Eye-Candy's für Fenster, finaler Zeichenschritt
  - Picom (fork of Compton), Compiz xprop
- **Wayland:** **➡** Display-Server-Protokoll

#### ![height:250px](_resources/_2021-10-27-02-25-42.png)![height:250px](_resources/_2021-10-27-02-27-00.png)
#### https://www.secjuice.com/wayland-vs-xorg/

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Linux Überblick
### Begriffe 4 von 4

- **Displaymanager:** asdf, xinit
- **GTK** (lxappereance) vs **QT** (qt5ct, kvantummanger)
- **Initsystem:** systemd, OpenRC
- **Sudo**, **Doas**
- **Pulseaudio:** pavucontrol (GTK and QT), pulsemixer (curses)
  - **Alsa:** alsamixer (alsa-utils package)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
