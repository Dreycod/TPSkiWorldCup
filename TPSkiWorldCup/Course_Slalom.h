#ifndef COURSE_SLALOM_HPP
#define COURSE_SLALOM_HPP
#include <string>  // Use angle brackets and include the standard namespace
#include "Course.h"
#include "Participation.h"
using namespace std;

class Course_Slalom: public Course
{
private:
	void attribuerDossard(int debut, int fin);
	string nom;
	string date;
public: 
	Course_Slalom(string nom, string date, Participation * lesParticipants);
	~Course_Slalom();
	void traitementDossards();
};

#endif

