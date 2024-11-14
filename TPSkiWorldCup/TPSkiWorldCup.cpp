// TPSkiWorldCup.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Competiteur.h"
#include "Participation.h"
#include "Course_Slalom.h"
#include <iostream>

int main()
{
	// La liste n'est pas triée
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

	Participation* lesParticipants = new Participation[100];

	// Il y a 16 inscriptions à jour
	Participation P1(0, 60, A); lesParticipants[0] = P1;
	Participation P2(0, 120, B); lesParticipants[1] = P2;
	Participation P3(0, 30, C); lesParticipants[2] = P3;

	Participation P4(0, 28, D);lesParticipants[3] = P4; 
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

	Course_Slalom S("Kitzbühel", "20/01/2025", lesParticipants);

	S.afficherLesParticipants();
	cout << "------------------------------------------------------------------------- \n";
	S.traitementDossards();
	S.afficherLesParticipants();
	return 0;
}
