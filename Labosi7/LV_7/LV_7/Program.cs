/* ZADATAK 1 */
using System;
using System.Collections.Generic;

namespace LV_7
{
    class Program
    {
        static void Main(string[] args)
        {
            
            BankovniRacun randomBankovni = new BankovniRacun("Valentin Matokanovic", 500, -1000);
            MobilniRacun randomMobilni = new MobilniRacun("0954543431", 50, 0.54);
            BankovniRacun randomBankovni1 = new BankovniRacun("Marko Markonic", -1050, -1000);
            MobilniRacun randomMobilni1 = new MobilniRacun("0923941234", 0.53, 0.54);
            List<IPayable> Racuni = new List<IPayable>();
            Racuni.Add(randomBankovni);
            Racuni.Add(randomMobilni);
            Racuni.Add(randomBankovni1);
            Racuni.Add(randomMobilni1);
            foreach (IPayable payable in Racuni)
            {
                payable.dohvatiIznos();
                payable.dodajIznos();
                payable.oduzmiIznos();
            }

        }
    }

    class BankovniRacun : IPayable
    {
        string ime;
        float iznos;
        float max_minus;
        public BankovniRacun(string ime, float iznos, float max_minus)
        {
            this.ime = ime;
            this.iznos = iznos;
            this.max_minus = max_minus;
        }
        public void dohvatiIznos()
        {
                Console.WriteLine("Iznos na bankovnom racunu vlasnika '" + ime + "' je: " + iznos +
                " kn");
        }
        public void dodajIznos()
        {
            Random rd = new Random();
            float rand_Iznos = rd.Next(10, 100);
            iznos = iznos + rand_Iznos;
            Console.WriteLine("Uplatili ste " + rand_Iznos +
            " kn na vas racun. \n");
            Console.WriteLine("Iznos na bankovnom racunu je: " + iznos +
            " kn. \n");
        }
        public void oduzmiIznos()
        {
            Random rd = new Random();
            float rand_Iznos = rd.Next(1, 10);
            iznos = iznos - rand_Iznos;
            if (iznos <= max_minus)
            {
                Console.WriteLine("Niste u mogucnosti podici novac, dosegli ste maksimalan minus od " + max_minus + " kn.");
                iznos = iznos + rand_Iznos;
            }
            else
            {
                Console.WriteLine("Podigli ste " + rand_Iznos +
                " kn s vaseg racuna. \n");
                Console.WriteLine("Iznos na bankovnom racunu je: " + iznos +
                " kn. \n");
            }
        }
    }
    class MobilniRacun : IPayable
    {
        string broj;
        double stanje;
        double cijena_poruke;
        public MobilniRacun(string broj, double stanje, double cijena_poruke)
        {
            this.broj = broj;
            this.stanje = stanje;
            this.cijena_poruke = cijena_poruke;
        }
        public void dohvatiIznos()
        {
            Console.WriteLine("Stanje na mobilnom racunu je: " + stanje +
            " kn");
        }
        public void dodajIznos()
        {
            Random rd = new Random();
            double rand_Iznos = rd.Next(10, 100);
            stanje = stanje + rand_Iznos;
            Console.WriteLine("Uplatili ste " + rand_Iznos +
            " kn na vas racun. \n");
            Console.WriteLine("Stanje na mobilnom racunu je: " + stanje +
            " kn. \n");
        }
        public void oduzmiIznos()
        {
            if(stanje < cijena_poruke)
            {
                Console.WriteLine("Niste u mogućnosti poslati poruku, stanje na vasem racunu je:" + stanje +
            " kn. \n");
            }
            else
            {
                stanje = stanje - cijena_poruke;
                Console.WriteLine("Poslali ste poruku za " + cijena_poruke +
                " kn s broja: " + broj);
                Console.WriteLine("Stanje na mobilnom racunu je: " + stanje +
                " kn. \n");
            }
        }
    }
    interface IPayable
    {
        void dohvatiIznos();
        void dodajIznos();
        void oduzmiIznos();
    }

}