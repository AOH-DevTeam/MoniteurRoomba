enum eCapt {
    soulevRoueG=0,  //!< Whell Drop Left ID=7 bit 3
        //! \brief 1=Roue soulevée
    soulevRoueD=1,  //!< Whell Drop Right ID=7 bit 2
        //! \brief 1=Roue soulevée
    chocG=2,        //!< Bump Left ID=7 bit 1
    chocD=3,        //!< Bump Right ID=7 bit 0
    mur=4,          //!< Wall ID=8
    videG=5,        //!< Cliff Left State ID=9
    videAvG=6,      //!< Cliff Front Left State ID=10
    videAvD=7,      //!< Cliff Front Right State ID=11
    videD=8,        //!< Cliff Right State ID=12
    murVirtuel=9,  //!< Virtual Wall ID=13
    surIntensRoueG=10, //!< Wheel Overcurrents, Left Whell ID=14 bit 4
    surIntensRoueD=11, //!< Wheel Overcurrents, Right Whell ID=14 bit 3
    surIntensBrossePrinc=12, //!< Wheel Overcurrents, Main Brush ID=14 bit 2
    surIntensBrosseLat=13, //!< Wheel Overcurrents, Side Brush ID=14 bit 0
    nivPoussiere=14, //!< Dirt Detect ID=15
    infrarougeOmnidir=15, //!< Infrared Character Omni ID=17
    infrarougeG=16, //!< Infrared Character Left ID=52
    infrarougeD=17, //!< Infrared Character Right ID=53
    boutonHorloge=18, //!< Buttons Clock ID=18 bit 7
    boutonProg=19, //!< Buttons Schudule ID=18 bit 6
    boutonJour=20, //!< Buttons Day ID=18 bit 5
    boutonHeure=21, //!< Buttons Hour ID=18 bit 4
    boutonMin=22, //!<Buttons Minute ID=18 bit 3
    boutonBase=23, //!<Buttons Dock ID=18 bit 2
    boutonSpot=24, //!<Buttons Spot ID=18 bit 1
    boutonNett=25, //!<Buttons Clean ID=18 bit 0
    distance=26, //!<Distance ID=19
    angle=27, //!<Angle ID=20
    etatCharge=28, //!<Charging State ID=21
    voltage=29, //!<Voltage ID=22
    courant=30, //!<Current ID=23
    temperature=31, //!<Temperature ID=24
    chargeBat=32, //!<Battery Charge ID=25
    capaciteBat=33, //!<Battery Capacity ID=26
    signalMur=34, //!<Wall Signal ID=27
    signalVideG=35, //!<Cliff Left Signal ID=28
    signalVideAvG=36, //!<Cliff Front Left Signal ID=29
    signalVideAvD=37, //!<Cliff Front Right Signal ID=30
    signalVideD=38, //!<Cliff Right Signal ID=31
    chargeurBase=39, //!<Charging Source Available, Home Base ID=34 bit 1
    chargeurInterne=40, //!<Charging Source Available, Internal Charger ID=34 bit 0
    mode=41, //!< OI Mode
    noMusique=42, //!<Song Number ID=36
    musique=43, //!<Song playing ID=37
    nombrePaquets=44, //!<Number of Stream Packets ID=38
    vitesseReq=45, //!<Requested Velocity ID=39
    rayonReq=46, //!<Requested Radius ID=40
    vitesseDReq=47, //!<Requested Right Velocity ID=41
    vitesseGReq=48, //!<Requested Left Velocity ID=42
    encodeurD=49, //!<Right Encoder Counts ID=43
    encodeurG=50, //!<Left Encoder Counts ID=44
    oeilLateralD=51, //!<Light Right Bumber ID=45 bit 5
    oeilAvantD=52, //!<Light Front Right Bumber ID=45 bit 4
    oeilCentreD=53, //!<Light Center Right Bumber ID=45 bit 3
    oeilCentreG=54, //!<Light Center Left Bumber ID=45 bit 2
    oeilAvantG=55, //!<Light Front Left Bumber ID=45 bit 1
    oeilLateralG=56, //!<Light Left Bumber ID=45 bit 0
    signalOeilLateralG=57, //!<Light Bumb Left Signal ID=46
    signalOeilAvantG=58, //!<Light Bumb Front Left Signal ID=47
    signalOeilCentreG=59, //!<Light Bumb Center Left Signal ID=48
    signalOeilCentreD=60, //!<Light Bumb Center Right Signal ID=49
    signalOeilAvantD=61, //!<Light Bumb Front Right Signal ID=50
    signalOeilLateralD=62, //!<Light Bumb Right Signal ID=51
    courantMoteurG=63, //!<Left Motor Current ID=54
    courantMoteurD=64, //!<Right Motor Current ID=55
    courantMoteurBrossePrinc=65, //!<Main Brush Motor Current ID=56
    courantMoteurBrosseLateral=66, //!<Side Brush Motor Current ID=57
    roueFolle=67, //!<Stasis ID=58
    eMin=soulevRoueG,
    eMax=roueFolle
};

