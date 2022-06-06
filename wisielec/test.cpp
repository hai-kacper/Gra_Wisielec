
#include "pch.h"
#include "CppUnitTest.h"
#include "../CMakeWisielec/"   // Update using your project name

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HelloWorldTests
{
    TEST_CLASS(HelloWorldTests)
    {
    public:

        TEST_METHOD(TestMethod)
        {
            std::string expected = "Niepoprany znak, to nie jest litera\nWprowadz jeszcze raz\n;

                std::stringstream buffer;
            std::streambuf* sbuf = std::cout.rdbuf(); // Save cout's buffer
            std::cout.rdbuf(buffer.rdbuf()); // Redirect cout to the stringstream buffer

            // Call main() in your test
            int result = czy_znak_jest_litera(13)

                // When finished, redirect cout to the original buffer 
                std::cout.rdbuf(sbuf);
            std::cout << "std original buffer: \n";
            std::cout << buffer.get();

            // Test
            Assert::AreEqual(expected, buffer.str());
        }
    };
}