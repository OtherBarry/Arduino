using System;
using System.IO.Ports;
namespace test
{
    class Program
    {
        static void Main(string[] args)
        {
            SerialPort port = new SerialPort("COM3", 9600);
            port.Open();
            port.Write("5");
        }
    }
}