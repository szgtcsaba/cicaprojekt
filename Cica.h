#ifndef CICA_H
#define CICA_H

class cica 
{
	public:

		enum Bujas_targya
		{
			ember,
			macska,
			targy
		};

		enum Nyavogas_tipus
		{
			veszely_van,
			tuzelni_akarok,
			ehes_vagyok,
			szomjas_vagyok,
			foglalkozz_velem,
			hagyjal_beken
		};

		enum Hang_tipus_nyavogas
		{
			vekony_hang_nosteny, 
			eroteljes_fiu_hang,
			hangtalan
		};

		enum Szin
		{
			 fekete, 
			 feher, 
			 barna, 
			 szurke, 
			 voros
		};

		enum Nem
		{
			 fiu, 
			 lany
		};

		enum Egeszsegi_allapot
		{
			 jo, 
			 rossz
		};

		enum Kontinens
		{
			Europa,
			Azsia,
			Amerika, 
			Afrika,
			Ausztralia
		};

		enum Faj
		{
			hazimacska, 
			tigris,
			oroszlan,
			leopard,
			gepard,
			hiuz,
			egyeb
		};

		enum Ellenseg
		{
			jarmu,
			kutya,
			masik_cica,
			egyeb_allat
		};

	public: //miert van ketszer public?
		cica(Nem nem, Faj faj, Kontinens kontinens, Egeszsegi_allapot, Szin szin, unsigned int magassag, double testtömeg);
		~cica();

		//cicasagok
		void nyavogni(const Nyavogas_tipus& nyavogas, const Hang_tipus_nyavogas& hang_nyavogas);
		void bujik(const Bujas_targya& targy);
		void dorombol();
		void nyalakodik();

		//osztonok
		void tuzel();
		void eszik();
		void iszik();
		void pisil();
		void kakil();

		//ragadozas

		void vadaszat();
		void harapdal();
		void karmol();
		void kormot_erosit();

		//aktiv tevekenysegek

		void jatszik();
		void maszik();
		void fetreng();
		void pottyan();
		void ugrik();
		void szalad();

		//tamadas, vedekezes
		void harcol(const Ellenseg& ellenseg);
		void szort_borzol(const Ellenseg& ellenseg);


	private:
		unsigned int elettartam;
		unsigned int vemhessegi_ido;
		double testtomeg;
		unsigned int sebesseg;
		unsigned int magassag;
		unsigned int kor;
		bool ivar_erett;
		bool ivartalanitva_van;
		bool vemhes;
		Szin szin;
		Nem nem;
		Egeszsegi_allapot eg_all;
		Kontinens kontinens;
		Faj faj;
};

#endif