# Document de préproduction pour le Lumifest 2024

## Concept

### Intention de départ

L'Équilibre Fragile entre le monde et son environnement

### Synopsis

L’expérience commence à l’extérieur de la salle lorsqu’un interacteur est attiré par le portail qui mène vers l’interieur de la pièce, un monde parallèle. En rentrant, l’interacteur découvre une pièce faiblement éclairé. Les projections sont vide de couleur, mais lorsque quelqu’un touche à un des capaciteurs (ou valves) l’oeuvre se “réveille” en mettant dans la projection ce qui est lié à sa tour.  Cette pièce devient donc un univers en constante évolution, mêlant formes abstraite, motifs, objets reconnaisables psychédélique. Des valves interactives (ou capaciteurs) invitent les utilisateurs à changer l’environnement pendant que quatre tours fusionnent de manière unique leur thèmes.

### But

#### Fusion des Esthétiques

Comprendre que les l’environement va coexister malgré le chaos initial et que ça crée une identité nouvelle.

#### Participation Active

Permettre de comprendre l’impact de la personne sur son environnement.

#### Évasion et Réflexion

Faire sortir les gens de leur qutodien pour réfléchir à l’enjeu.

### Enjeu

L'œuvre soulève la question de l'équilibre délicat entre notre quête de progrès technologique et la préservation de notre connexion avec la nature. Les thèmes psychédéliques et cyberpunk se rejoignent pour illustrer un monde où ces deux éléments coexistent, mais pas toujours harmonieusement.

## Direction Artistique

## Direction Technique

### Description

L'oeuvre sera composé de quatre piliers sur lesquels nous attacherons des projecteurs (deux projecteurs par pilier) qui nous permettront de faire une projection 360. Les piliers seront également équiper de bandes LED décoratives et de valves de style industriel qui seront rattaché à des potentiomètre et des capteur de capacitance. Les données reçues depuis les capteurs seront ensuite acheminé vers la régis et elles impacteront la projection 360.

### Plantation Technique

Pour la projection 360, nous allons utiliser huit (8) projecteurs UST, fixés sur quatre (4) ponts d'éclairage d'une hauteur de huit (8) pieds chaques. Nous allons également faire passer l'ensemble des fils nécessaires au fonctionnement du projet en les attachants au plafond de la pièce.

![schema_cablage_salle](medias/schema/schema_cablage_salle.drawio.png)

- Nous avons numeroté chacun des piliers de un à quatre pour facilité l'utilisation multidimensionnel de l'espace. 
- Les projecteurs sont appelés par le numero du pilier sur lequel ils fixés précédé d'un "p", pour projecteur, et suivie d'un "a" ou un "b". Ces-dernières font référence au mur vers lequel le projecteur est dirigé. Les projecteurs se terminant avec la lettre "a" sont pointés vers les murs les plus longs, et les projecteurs se terminant par la lettre "b" sont pointés vers les murs les plus cours.
- Les hauts-parleurs suivent la même nomenclature. Soit la lettre "s", faisant référence au type de technologie, suivie d'un chiffre de un à quatre, faisant référence au quadrant de la pièce dans lequel le haut-parleur ce situe, et terminé par la lettre "e" ou la lettre "i". Ces-dernières font la différence entre les hauts-parleurs extérieur (e), qui si trouvent dans les quatre coins de la pièce, et les hauts-parleurs intérieur (i), qui se trouvent dans les piliers. 

### Brenchements

Pour les brenchements, nous allons centralisé la majorité de l'expérience sur la scène, que nous allons utilisé comme régis. Depuis cette régis, nous allons passé un (1) regroupement de fils de chaque côtés et quatre (4) depuis le milieu. 

#### régis

Le régis est l'endroit dans l'installation ou nous allons recevoir les données captées par le micro-controleur et nous allons les utilisées pour affecter l'ambience sonore et les projections.  
![schema_brenchment_régis](medias/schema/schema_brenchement_regis.drawio.png)

![schema_brenchement_régis_02](medias/schema/sche_brenchement_regis_02.drawio.png)
/
Les fils se dirigeant de la régis à l'installation sont divisés en six (6) regroupement distinct. Ces-derniers suivent la même nomenclature que pour le reste du projet. Les regroupements de fils qui ne se dirigent pas vers des piliers sont numéroté par avec les lettres "d", pour le regroupement qui se dirige vers le côté droit de la pièce, et "g", pour le regroupement qui se dirige vers le côté gauche de la pièce. 

#### piliers

Bien que chacun des quatre (4) piliers sera different, les technologies utilisées seront sensiblement les mêmes. De facto,le brenchement des technologies pour chacun des piliers sera le même. 

![schema_pilier_brenchement](medias/schema/schema_piliers_brenchement.drawio.png)

#### valve

Les valves sont l'élément intéractif principale de notre installation. Les valves seront connecté a un potentiomètre et relié à un resistor et un port pwn du micro-controleur. Pour s'éviter le trouble de trouver quatre (4) valve vintage pareil et d'avoir des soucis pour les fixés, nous avons décidé de les faire imprimé en 3D. 

![schema_valve](medias/schema/schema_valve.drawio.png)
![schema_valve_construction](medias/schema/schema_valve_construction.drawio.png)

### Liste de Matériel

Puisque nous avons besoin d'une quantitée diverse de matériel et pour faciliter la lecture, nous avons décidé de diviser la liste de matériel en plusieurs sections. Nous allons mettre entre parenthèse la quantité de chaque éléments que nous avons besoin.

#### matériel prêté par Dominic Arcand

Dans cette liste nous avons regroupé tout ce qui nous sera prêté par les organisateurs du Lumifest 2024.

- Ponts d'éclairage 8' (4)
- projecteurs UST 800px (8)
- convertisseur hdmi/sdi (8)
- cable sdi 100' (16)
- haut-parleurs (4)
- trepieds pour haut-parleur (4)
- cable xlr 100' (2)
- cable xlr 50' (4)
- artnet 8 univers (1) // à confirmer
- tube LED (9)
- bande LED (8)
- bande LED pixel (9)
- cable dmx 100' (4)
- cable dmx 50' (4)
- cable dmx 5' (12)
- u-ground 100' (4)
- u-ground 50' (4)
- power bar (5)
- poches de sable (24)

#### matériel du pmv que nous devons acheter

Dans cette liste, nous avons regroupé tout ce que nous devons acheter pour réaliser un produit minimum viable. Pour faciliter la compréhension, nous avons insérer des liens pour chacun des items.

- [ESP32-POE](https://www.digikey.ca/en/products/detail/olimex-ltd/ESP32-POE/10258717?utm_adgroup&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Product_Low%20ROAS%20Categories&utm_term&productid=10258717&utm_content&utm_id=go_cmp-20291741422_adg-_ad-__dev-c_ext-_prd-10258717_sig-Cj0KCQiA-62tBhDSARIsAO7twbbuaS895O0iKFZlhM52wHeb3qNiA9BaEHbKfJHeihLFH5BrcTVQeOgaAuObEALw_wcB&gad_source=1) (4)
- [df mini player](https://www.amazon.ca/Aideepen-DFPlay-Player-Support-Arduino/dp/B07BDD8BF3/ref=asc_df_B07BDD8BF3/?tag=googleshopc0c-20&linkCode=df0&hvadid=578872479514&hvpos=&hvnetw=g&hvrand=3997010125268453566&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000398&hvtargid=pla-1649524406815&psc=1&mcid=ed33710875bc3ef0b0290923883cfbb7) (4)
- [1/8 jack module](https://www.digikey.ca/en/products/detail/cui-devices/MJ-3502/281321?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Supplier_Focus%20Supplier&utm_term=&productid=281321&utm_content=&utm_id=go_cmp-20282403582_adg-_ad-__dev-c_ext-_prd-281321_sig-CjwKCAiAtt2tBhBDEiwALZuhACXGP7Aw6OxzMWvRmwUmgxPhtvm9qSbnXA1BMptA5-Tq7eCuLxQbdRoCezsQAvD_BwE&gad_source=1&gclid=CjwKCAiAtt2tBhBDEiwALZuhACXGP7Aw6OxzMWvRmwUmgxPhtvm9qSbnXA1BMptA5-Tq7eCuLxQbdRoCezsQAvD_BwE) (4)
- [haut-parleur intérieur](https://www.amazon.ca/Portable-Speaker-Interface-Smartphone-Computer/dp/B07RJR1XPH/ref=asc_df_B07RJR1XPH/?tag=googlemobshop-20&linkCode=df0&hvadid=341825615644&hvpos=&hvnetw=g&hvrand=17321004739133807997&hvpone=&hvptwo=&hvqmt=&hvdev=m&hvdvcmdl=&hvlocint=&hvlocphy=9000439&hvtargid=pla-813021010978&psc=1&mcid=c61e7c8226c937e390bba8e9cecc9571) (4)
- [carte sd](https://www.amazon.ca/Gigastone-Memory-Camcorder-Recorder-Playback/dp/B07SBL5GZB/ref=asc_df_B07SBL5GZB/?tag=googleshopc0c-20&linkCode=df0&hvadid=540626975969&hvpos=&hvnetw=g&hvrand=6668981857743626176&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000398&hvtargid=pla-916421134773&mcid=5991f97f7ba734d090595c9e7cbb9338&th=1) (4)
- resistor (4)
- potentiometre (4)
- valve (4)
- [clamp](https://www.amazon.ca/SmallRig-Thread-Monitor-Umbrellas-Shelves/dp/B075M3Y21G/ref=asc_df_B075M3Y21G/?tag=googleshopc0c-20&linkCode=df0&hvadid=335336194689&hvpos=&hvnetw=g&hvrand=14228036213940279672&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000605&hvtargid=pla-794475055880&psc=1&mcid=51d30a1b61b838f6ae8a9a8f0b50d2c9) (15)
- [display port hub](https://www.amazon.ca/DisplayPort-Splitter-BolAAzuL-Adapter-Display/dp/B09L5YPM5D/ref=sr_1_27?keywords=displayport+hub&qid=1706217664&sr=8-27) (3)
- [cable display port](https://www.amazon.ca/DisplayPort-Benfei-Gold-Plated-Supports-Compatible/dp/B077BPW8XJ/ref=asc_df_B077BPW8XJ/?tag=googleshopc0c-20&linkCode=df0&hvadid=459346866217&hvpos=&hvnetw=g&hvrand=6240455701509316061&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9061031&hvtargid=pla-525295260888&psc=1&mcid=cfccc67ba31e3e2cbd1221cf241472ed) (3)
- [convertisseur display port/hdmi](https://www.amazon.ca/DisplayPort-Benfei-Gold-Plated-Supports-Compatible/dp/B077BPW8XJ/ref=asc_df_B077BPW8XJ/?tag=googleshopc0c-20&linkCode=df0&hvadid=459346866217&hvpos=&hvnetw=g&hvrand=6240455701509316061&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9061031&hvtargid=pla-525295260888&psc=1&mcid=cfccc67ba31e3e2cbd1221cf241472ed) (9)
- [cable hdmi 1'](https://www.amazon.ca/valonic-Short-HDMI-Cable-ethernet/dp/B01JJPN9KY/ref=asc_df_B01JJPN9KY/?tag=googleshopc0c-20&linkCode=df0&hvadid=579383378528&hvpos=&hvnetw=g&hvrand=16043264866439293911&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9061031&hvtargid=pla-704048243718&psc=1&mcid=c8aea733e7313e4296168c5523c22d5d) (8)
- [carte de son](https://reverb.com/p/focusrite-scarlett-6i6-2nd-gen) (1)
- [subwoofer](https://www.amazon.com/PreSonus-Eris-Sub-8BT-Studio-Quality/dp/B0C891Q6YH/ref=sr_1_11?crid=1UXY9DPDH23R8&keywords=subwoofer&qid=1707065232&sprefix=subwoofe%2Caps%2C216&sr=8-11) (1)

#### matériel de déco que nous devons acheter

Dans cette liste, nous regroupons tout les éléments de décoration qui ne sont pas essentiel au fonctionnement de l'installation, mais qui ajoute à l'expérience globale et créant, lorsque juxtaposé à la projection 360 et à l'ambience sonore, une atmosphère plus complète. 
Dans la même ordre d'idée que pour la dernière liste, nous avons intégré des liens pour chacun des éléments de la liste.

- 

### Budget
