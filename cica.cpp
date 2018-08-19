#include "Cica.h"

cica::cica(Nem n, Faj f, Kontinens k, Egeszsegi_allapot ea, Szin sz, unsigned int m, double t): 
	  nem(n), faj(f), kontinens(k), eg_all(ea), szin(sz), magassag(m), testtomeg(t)
{
	ivar_erett = false;
	ivartalanitva_van = false;
	vemhes = false; 
}

cica::~cica()
{
}

//cicasagok

void cica::nyavogni(const Nyavogas_tipus& nyavogas, const Hang_tipus_nyavogas& hang_nyavogas)
{
	switch(hang_nyavogas)
	{
		case vekony_hang_nosteny : ;
		case eroteljes_fiu_hang : ;
		case hangtalan : ;
	}
	switch(nyavogas)
	{
		case veszely_van : ;
		case tuzelni_akarok : ;
		case ehes_vagyok : ;
		case szomjas_vagyok : ;
		case foglalkozz_velem : ;
		case hagyjal_beken : ;
	}
}

void cica::dorombol()
{
}

void cica::bujik(const Bujas_targya& valami)
{
	switch(valami)
	{
		case ember : ;
		case macska : ;
		case targy : ;
	}
}

void cica::nyalakodik()
{
}

//osztonok

void cica::tuzel()
{
}

void cica::eszik()
{
}

void cica::iszik()
{
}

void cica::pisil()
{
}

void cica::kakil()
{
}

//ragadozas

void cica::vadaszat()
{
}

void cica::harapdal()
{
}

void cica::karmol()
{
}

void cica::kormot_erosit()
{
}

//aktiv tevekenysegek

void cica::jatszik()
{
}

void cica::maszik()
{
}

void cica::fetreng()
{
}

void cica::pottyan()
{
}

void cica::ugrik()
{
}

void cica::szalad()
{
}

//tamadas, vedekezes

void cica::harcol(const Ellenseg& ellenseg)
{
}

void cica::szort_borzol(const Ellenseg& ellenseg)
{
}