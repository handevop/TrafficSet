# TrafficSet – simulacija prometa i algoritmi mrežnog toka

TrafficSet je projekt koji objedinjuje **simulaciju prometa u Unityju** i **algoritamsku obradu prometne mreže** pomoću mrežnog toka (Network Flow).  
Projekt je razvijen u sklopu završnog rada i služi za analizu i optimizaciju protoka prometa.

## Sadržaj projekta
Projekt se sastoji od tri glavne cjeline:
- Unity simulacija prometnog sustava
- C++ algoritam mrežnog toka
- pisana dokumentacija (završni rad)

---

## Unity dio – simulacija prometa
Unity projekt služi za:
- vizualizaciju prometne mreže
- simulaciju kretanja vozila
- prikaz čvorova, cesta i raskrižja
- testiranje prometnih scenarija

### Tehnologije
- Unity
- C#
- Unity Editor (ProjectVersion.txt definira verziju)

Putanja:
Unity/TrafficSet/


Za pokretanje:
1. Otvoriti Unity Hub
2. Učitat projekt iz `Unity/TrafficSet`
3. Pokrenuti scenu `First.unity`

---

## Algoritamski dio – Network Flow
Algoritamski dio implementiran je u **C++** i bavi se:
- izračunom maksimalnog protoka kroz prometnu mrežu
- modeliranjem cesta kao bridova, a raskrižja kao čvorova
- analizom opterećenja prometnog sustava

Datoteke:
Algoritam/
├── NetworkFlow.cpp
└── networkflow.exe


Algoritam se može koristiti neovisno o Unity simulaciji za matematičku analizu mreže.

---

## Dokumentacija
U mapi `Docs` nalazi se završni rad koji detaljno opisuje:
- teorijsku pozadinu problema
- korištene algoritme
- implementaciju simulacije
- rezultate i analizu

Docs/
├── ZavrsniRad.docx
└── ZavrsniRad.pdf


---

## Struktura projekta (sažetak)
TrafficSet-master/
│
├── Algoritam/ # C++ algoritam mrežnog toka
├── Unity/ # Unity simulacija prometa
├── Docs/ # Završni rad (PDF i DOCX)
└── README.md


---

## Namjena projekta
Projekt je edukativnog i istraživačkog karaktera te se koristi za:
- simulaciju prometnih sustava
- primjenu algoritama mrežnog toka
- analizu i optimizaciju prometa
- demonstraciju povezanosti simulacije i algoritamske obrade

