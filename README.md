# yoga_app
Der unterschied zum Main branch ist, dass ich hier versuche 
mehr die Funktionen von Qt nutze anstatt selbst ein Wechsel
zwischen verschiedenen Ansichten zu schreiben.


Hallo zusammen!
Diese App ist eine Fitness/Wellness-App für Windows, die dem Benutzer hilft, Yoga zu trainieren.

Die Hauptfunktionen sind:
- Editor für eigene Workouts
- optische und auditive Anweisungen
- Möglichkeit, die Geschwindigkeit und die Länge eines Workouts einzustellen
- Aufzeichnung des Trainingsverlaufs (für ein Jahr)

Klassen: 
Workout:
wird dynamisch erzeugt, eine laufendes Workout ist eine Klasse, lädt ein Workout zur Laufzeit, 

Historie:
wird am Ende eines Workouts erzeugt und speichert das beendete Workout ab.

Editor:
Ermöglicht es dem Nutzer ein eigenes Workout zu erstellen und dieses in einem Format zu speichern, 
das in der Workout Klasse wieder geladen werden kann.

Hauptmenü:
3 Knöpfe -Workout, Editor, Historie, 

workout_file_handler:
Die workouts werden serialisiert gespeichert und könne wieder geladen
werden.
 Der Workout file handler besitzt mehrer Helfer Klassen:
 input dialog zum editieren und ergänzen von Übungen


Funktionen: Speichern, Laden, Bearbeiten 

