﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Kugel1: ");
            Kugel kugel1 = new Kugel(Convert.ToDouble(Console.ReadLine()));
            Console.Write("Kugel2: ");
            Kugel kugel2 = new Kugel(Convert.ToDouble(Console.ReadLine()));

            if (kugel1.istKleinerGleich(kugel2) == true)
                Console.WriteLine("kugel1 ist kleiner oder gleich kugel2");
            else
                Console.WriteLine("kugel2 ist kleiner oder gleich kugel1");


            //Console.WriteLine(kugel1.KugelRadius);
            //Console.WriteLine(kugel2.KugelRadius);
            
            Console.WriteLine(kugel1.BerechneVolumen());
            Console.WriteLine(kugel2.BerechneVolumen());

            Console.WriteLine(kugel1.BerechneOberflaeche());
            Console.WriteLine(kugel2.BerechneOberflaeche());

            kugel1.Aufblasen();
            kugel2.Aufblasen();

            Console.WriteLine("Aufblasen");

            Console.WriteLine(kugel1.BerechneVolumen());
            Console.WriteLine(kugel2.BerechneVolumen());

            Console.WriteLine(kugel1.BerechneOberflaeche());
            Console.WriteLine(kugel2.BerechneOberflaeche());

            Console.ReadLine();
        }
    }
}
