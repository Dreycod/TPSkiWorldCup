//
//  main.cpp
//  ski
//
//  Created by Clement on 13/11/2024.
//

#include <iostream>
#include <string>
#include "Competiteur.h"
#include "Course_Slalom.h"
using namespace std;




int main() {


    //Competiteur participants[100] = {
    //    Competiteur(1, "Dupont", "Pierre", 10000, 150),
    //    Competiteur(2, "Martin", "Sophie", 120, 160),
    //    Competiteur(3, "Lemoine", "Julien", 110, 140),
    //    Competiteur(4, "Clement", "Vabre", 4220, 4643),

    //    // Ajout des autres compétiteurs avec un incrément
    //    Competiteur(5, "Dupont", "Paul", 130, 170),
    //    Competiteur(6, "Martin", "Marie", 140, 180),
    //    Competiteur(7, "Lemoine", "Jacques", 150, 190),
    //    Competiteur(8, "Clement", "Alice", 160, 200),
    //    Competiteur(9, "Dupont", "Luc", 170, 210),
    //    Competiteur(10, "Martin", "Claire", 180, 220),
    //    Competiteur(11, "Lemoine", "Michel", 190, 230),
    //    Competiteur(12, "Clement", "Pauline", 200, 250),
    //    Competiteur(13, "Dupont", "Marc", 210, 270),
    //    Competiteur(14, "Martin", "Alice", 220, 290),
    //    Competiteur(15, "Lemoine", "Franck", 230, 310),
    //    Competiteur(16, "Clement", "Thierry", 240, 330),
    //    Competiteur(17, "Dupont", "Jean", 250, 350),
    //    Competiteur(18, "Martin", "Isabelle", 260, 370),
    //    Competiteur(19, "Lemoine", "Louis", 270, 390),
    //    Competiteur(20, "Clement", "Charlotte", 280, 410),

    //    // On répète ce schéma pour ajouter jusqu'à 100 compétiteurs.
    //    Competiteur(21, "Dupont", "Henri", 290, 430),
    //    Competiteur(22, "Martin", "Jeanine", 300, 450),
    //    Competiteur(23, "Lemoine", "Nadine", 310, 470),
    //    Competiteur(24, "Clement", "Gérard", 20, 1490),
    //    Competiteur(25, "Dupont", "Alain", 330, 510),
    //    Competiteur(26, "Martin", "Emilie", 340, 530),
    //    Competiteur(27, "Lemoine", "Bernard", 350, 550),
    //    Competiteur(28, "Clement", "Renee", 360, 570),
    //    Competiteur(29, "Dupont", "Henriette", 370, 590),
    //    Competiteur(30, "Martin", "Vincent", 380, 610),

    //    // Continuez à ajouter de la même manière jusqu'à l'élément 100
    //    Competiteur(31, "Lemoine", "Monique", 390, 630),
    //    Competiteur(32, "Clement", "Lucie", 400, 650),
    //    Competiteur(33, "Dupont", "Bernadette", 410, 670),
    //    Competiteur(34, "Martin", "Sébastien", 420, 690),
    //    Competiteur(35, "Lemoine", "Henri", 430, 710),
    //    Competiteur(36, "Clement", "Monique", 440, 730),
    //    Competiteur(37, "Dupont", "Annie", 450, 750),
    //    Competiteur(38, "Martin", "Jacqueline", 460, 770),
    //    Competiteur(39, "Lemoine", "Patrice", 470, 790),
    //    Competiteur(40, "Clement", "Sophie", 480, 810),

    //    Competiteur(41, "Dupont", "Lucienne", 490, 830),
    //    Competiteur(42, "Martin", "Claude", 500, 850),
    //    Competiteur(43, "Lemoine", "Véronique", 510, 870),
    //    Competiteur(44, "Clement", "Denise", 520, 890),
    //    Competiteur(45, "Dupont", "Pascal", 530, 910),
    //    Competiteur(46, "Martin", "Jacques", 540, 930),
    //    Competiteur(47, "Lemoine", "Christiane", 550, 950),
    //    Competiteur(48, "Clement", "Luc", 560, 970),
    //    Competiteur(49, "Dupont", "Thierry", 570, 990),
    //    Competiteur(50, "Martin", "Estelle", 580, 1010),

    //    Competiteur(51, "Lemoine", "Renée", 590, 1030),
    //    Competiteur(52, "Clement", "Albert", 600, 1050),
    //    Competiteur(53, "Dupont", "Roger", 610, 1070),
    //    Competiteur(54, "Martin", "Suzanne", 620, 1090),
    //    Competiteur(55, "Lemoine", "Antoine", 630, 1110),
    //    Competiteur(56, "Clement", "Solange", 640, 1130),
    //    Competiteur(57, "Dupont", "Géraldine", 650, 1150),
    //    Competiteur(58, "Martin", "Emmanuel", 660, 1170),
    //    Competiteur(59, "Lemoine", "Charlotte", 670, 1190),
    //    Competiteur(60, "Clement", "Georges", 680, 1210),

    //    Competiteur(61, "Dupont", "Renée", 690, 1230),
    //    Competiteur(62, "Martin", "Marcel", 700, 1250),
    //    Competiteur(63, "Lemoine", "Nicole", 710, 1270),
    //    Competiteur(64, "Clement", "Jacqueline", 720, 1290),
    //    Competiteur(65, "Dupont", "Pierre", 730, 1310),
    //    Competiteur(66, "Martin", "Victor", 740, 1330),
    //    Competiteur(67, "Lemoine", "Daniel", 750, 1350),
    //    Competiteur(68, "Clement", "Edith", 760, 1370),
    //    Competiteur(69, "Dupont", "Benoît", 770, 1390),
    //    Competiteur(70, "Martin", "Gérard", 780, 1410),

    //    Competiteur(71, "Lemoine", "Hélène", 790, 1430),
    //    Competiteur(72, "Clement", "Marion", 800, 1450),
    //    Competiteur(73, "Dupont", "Sylvie", 810, 1470),
    //    Competiteur(74, "Martin", "Michel", 820, 1490),
    //    Competiteur(75, "Lemoine", "Philippe", 830, 1510),
    //    Competiteur(76, "Clement", "François", 840, 1530),
    //    Competiteur(77, "Dupont", "Louis", 850, 1550),
    //    Competiteur(78, "Martin", "Juliette", 860, 1570),
    //    Competiteur(79, "Lemoine", "Clémentine", 870, 1590),
    //    Competiteur(80, "Clement", "André", 880, 1610),

    //    Competiteur(81, "Dupont", "Nicolas", 890, 1630),
    //    Competiteur(82, "Martin", "Céline", 900, 1650),
    //    Competiteur(83, "Lemoine", "Lucienne", 910, 1670),
    //    Competiteur(84, "Clement", "Bernadette", 920, 1690),
    //    Competiteur(85, "Dupont", "Michel", 930, 1710),
    //    Competiteur(86, "Martin", "Patrick", 940, 1730),
    //    Competiteur(87, "Lemoine", "Brigitte", 950, 1750),
    //    Competiteur(88, "Clement", "Dominique", 960, 1770),
    //    Competiteur(89, "Dupont", "Antoine", 970, 1790),
    //    Competiteur(90, "Martin", "Nadine", 980, 1810),

    //    Competiteur(91, "Lemoine", "Valérie", 990, 1830),
    //    Competiteur(92, "Clement", "Sébastien", 1000, 1850),
    //    Competiteur(93, "Dupont", "Amandine", 1010, 1870),
    //    Competiteur(94, "Martin", "Bruno", 1020, 1890),
    //    Competiteur(95, "Lemoine", "Léa", 1030, 1910),
    //    Competiteur(96, "Dupont", "Pierre", 100, 150),
    //    Competiteur(97, "Martin", "Sophie", 120, 160),
    //    Competiteur(98, "Lemoine", "Julien", 110, 140),
    //    Competiteur(99, "Clement", "dzdz", 8220, 9643),
    //    Competiteur(100, "Clement", "clem", 7220, 7643)

    //};

    Competiteur* A = new Competiteur(1, "Perinne", "Pellen", 60, 12);
    Competiteur* B = new Competiteur(2, "Ingemar", "Stenmark", 120, 13);
    Competiteur* C = new Competiteur(3, "Ingrid", "Jacquemod", 30, 15);
    Competiteur* D = new Competiteur(4, "Alberto", "Tomba", 28, 16);
    Competiteur* E = new Competiteur(5, "Mickaël", "Von Grünigen", 1, 7);
    Competiteur* F = new Competiteur(6, "Bode", "Miller", 3, 10);
    Competiteur* G = new Competiteur(7, "Jean-Baptiste", "Grange", 6, 23);
    Competiteur* H = new Competiteur(8, "Marcel", "Hirscher", 12, 13);
    Competiteur* I = new Competiteur(9, "Lindsey", "Vonn", 3, 6);
    Competiteur* J = new Competiteur(10, "Marta", "Bassino", 61, 12);
    Competiteur* K = new Competiteur(11, "Carole", "Merle", 12, 13);
    Competiteur* L = new Competiteur(12, "Tessa", "Vorley", 3, 5);
    Competiteur* M = new Competiteur(13, "Mickaela", "Shiffrin", 6, 22);
    Competiteur* N = new Competiteur(14, "Tina", "Maze", 23, 33);
    Competiteur* O = new Competiteur(15, "Erika", "Hess", 31, 45);

    Competiteur* P = new Competiteur(16, "Marielle", "Goitschel", 22, 2);
    Competiteur* Q = new Competiteur(17, "Clément", "Noël", 33, 3);
    Competiteur* R = new Competiteur(18, "*Anemone", "*Marmottand", 44, 4);
    Competiteur* SS = new Competiteur(19, "*Anemone", "*Marmottand", 19, 0);
    Competiteur* T = new Competiteur(20, "*Anemone", "*Marmottand", 20, 0);
    Competiteur* U = new Competiteur(21, "*Anemone", "*Marmottand", 43, 0);
    Competiteur* V = new Competiteur(22, "*Anemone", "*Marmottand", 42, 0);
    Competiteur* W = new Competiteur(23, "*Anemone", "*Marmottand", 41, 0);
    Competiteur* X = new Competiteur(24, "*Anemone", "*Marmottand", 40, 0);
    Competiteur* Y = new Competiteur(25, "*Anemone", "*Marmottand", 39, 0);
    Competiteur* Z = new Competiteur(26, "*Anemone", "*Marmottand", 35, 0);
    Competiteur* AA = new Competiteur(27, "*Anemone", "*Marmottand", 23, 0);
    Competiteur* BB = new Competiteur(28, "*Anemone", "*Marmottand", 10, 0);
    Competiteur* CC = new Competiteur(29, "*Anemone", "*Marmottand", 9, 0);
    Competiteur* DD = new Competiteur(30, "*Last1", "*1", 44, 0);
    Competiteur* EE = new Competiteur(31, "*Last2", "*2", 12, 0);
    Competiteur* FF = new Competiteur(32, "*Last3", "*3", 11, 0);

    // Tableauy des inscriptions

    Participation lesParticipants[100];

    // Il y a 16 inscriptions à jour
    Participation P1(0, 60, A); lesParticipants[0] = P1;
    Participation P2(0, 120, B); lesParticipants[1] = P2;
    Participation P3(0, 30, C); lesParticipants[2] = P3;

    Participation P4(0, 28, D); lesParticipants[3] = P4;
    Participation P5(0, 1, E); lesParticipants[4] = P5;
    Participation P6(0, 3, F); lesParticipants[5] = P6;
    Participation P7(0, 6, G); lesParticipants[6] = P7;
    Participation P8(0, 12, H); lesParticipants[7] = P8;
    Participation P9(0, 3, I); lesParticipants[8] = P9;

    Participation P10(0, 61, J); lesParticipants[9] = P10;
    Participation P11(0, 12, K); lesParticipants[10] = P11;
    Participation P12(0, 3, L); lesParticipants[11] = P12;

    Participation P13(0, 6, M); lesParticipants[12] = P13;
    Participation P14(0, 23, N); lesParticipants[13] = P14;
    Participation P15(0, 31, O); lesParticipants[14] = P15;

    Participation P16(0, 22, P); lesParticipants[15] = P16;
    Participation P17(0, 33, Q); lesParticipants[16] = P17;
    Participation P18(0, 44, R); lesParticipants[17] = P18;

    Participation P19(0, 19, SS); lesParticipants[18] = P19;
    Participation P20(0, 20, T); lesParticipants[19] = P20;
    Participation P21(0, 43, U); lesParticipants[20] = P21;

    Participation P22(0, 42, V); lesParticipants[21] = P22;
    Participation P23(0, 41, W); lesParticipants[22] = P23;
    Participation P24(0, 40, X); lesParticipants[23] = P24;

    Participation P25(0, 39, Y); lesParticipants[24] = P25;
    Participation P26(0, 35, Z); lesParticipants[25] = P26;
    Participation P27(0, 23, AA); lesParticipants[26] = P27;

    Participation P28(0, 10, BB); lesParticipants[27] = P28;
    Participation P29(0, 9, CC); lesParticipants[28] = P29;
    Participation P30(0, 44, DD);  lesParticipants[29] = P30;

    Participation P31(0, 12, EE); lesParticipants[30] = P31;
    Participation P32(0, 11, FF); lesParticipants[31] = P32;



    Course_Slalom S("Mont Blanc", "15/11/2024", lesParticipants);
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;

    S.traitementDossards();









}
