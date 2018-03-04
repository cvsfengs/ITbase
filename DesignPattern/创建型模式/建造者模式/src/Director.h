#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include "Builder.h"

class Director
{

public:
	Director();
	virtual ~Director();
	Builder *m_Builder;

	Product* construct();
	void setBuilder(Builder* buider);

private:
	Builder * m_pbuilder;

};
#endif 
