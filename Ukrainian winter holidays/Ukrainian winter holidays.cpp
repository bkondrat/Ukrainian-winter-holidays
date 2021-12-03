#include <iostream>

int main() {

    std::cout << "MAIN TRADITIONAL UKRAINIAN WINTER HOLIDAYS\n\n";
    std::cout << "Winter is rich for Ukrainian traditional holidays.\n";
    std::cout << "Moreover, there are some of them that make people come to the country particularly for the unique cultural experience of the celebration.\n";
    std::cout << "Look through the traditions of the most famous winter Ukrainian holidays and don't forget to book your trip.\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "About what winter holiday would you like to know?\n";
    std::cout << "Choose the variant that interests you (a-c):\n";
    
    char choice1 = 0;

    for (int i = 0; i < 3 && choice1 != 'a' && choice1 != 'b' && choice1 != 'c'; i++) {
        std::cout << "a) Eve dinner, falls on January 6,\n";
        std::cout << "b) Christmas, falls on January 7,\n";
        std::cout << "c) Water reservior, falls on January 19.\n";
        std::cin >> choice1;
    }

    switch (choice1) {

    case 'a':
        std::cout << "On the night of January 6 to 7, Ukrainians celebrate one of the biggest religious holiday - Eve Dinner.\n";
        std::cout << "This holiday has many interesting traditions.\n";
        std::cout << "'It is the last day of the Christmas fast, so women cook 12 lean dishes, in honor of the 12 disciples of Christ.\n";
        std::cout << "Would you like to know a little bit about 12 dishes?\n";
        break;

    case 'b':
        std::cout << "When Eve Dinner is 100% family event, Christmas itself encourages people to make visits to each other.\n";
        std::cout << "On this day, instead of ordinary «Hello» people use a special greeting «The Christ was born» followed by «Let’s bring glory to him» as an answer.\n";
        std::cout << "Carols singing is an interesting and authentic Ukrainian tradition well preserved till these days.\n";
        std::cout << "Through traditional Ukrainian carols foreigners can get a glimpse of a unique cultural identity that miraculously survived through many centuries.\n";
        std::cout << "Teams of carolers start roaming their hometowns on January 7.\n";
        std::cout << "They are often dressed as characters present during Christ’s birth in Bethlehem (the three Kings, Angels, Shepherds, Herod), but also as the ritual goat, and such characters as the Gypsy and Jew, which had a special place in the life of Ukraine’s village agricultural society, as well as Death that comes to take Herod.\n";
        std::cout << "THE END\n";
        return 0;

    case 'c':
        std::cout << "This holiday symbolizes the end of the Christmas and New Year holiday season.\n";
        std::cout << "It is believed that every prayer on this day is heard and all sins can be washed away by the water (that’s why it is customary to bathe).\n";
        std::cout << "In the morning, it’s good to drink a glass of holy water on an empty stomach, and later gather at a festive table. \n";
        break;

    default:
        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Try next time again with small a, b or c.\n";
        return 0;
    }

    std::cout << "\n*      *      *\n";
    std::cout << "Would you like to know a little bit about Eve Dinner's dishes?\n";

    char choice2 = 0;

    for (int i = 0; i < 3 && choice2 != 'a' && choice2 != 'b'; i++) {

        std::cout << "a) Yes,\n";
        std::cout << "b) No, I'm not interested in that.\n";
        std::cin >> choice2;

    }

    if (choice2 != 'a' && choice2 != 'b') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    }
    else if (choice2 == 'b') {

        std::cout << "I am sorry to hear that.\n";
        std::cout << "See you next time.\n";
        std::cout << "THE END\n";
        return 0;

    }

    std::cout << "Here are 12 traditional dishes for Eve Dinner (remember that there are many other Ukrainian meals you can cook for this holiday):\n";
    std::cout << "1. Kutia - a main dish. It's a porridge made from wheat with the addition of sweet ingredients like honey, jam, dried fruits, etc.\n";
    std::cout << "2. Varenyky - a dish made of dough and sweet or salty filling.\n";
    std::cout << "3. Holubtsi - a dish usually made of cabbage leaves, rice, and meat.\n";
    std::cout << "4-5. Marinated mushrooms and herring.\n";
    std::cout << "6. Mushroom soup, made with dried borowik mushrooms.\n";
    std::cout << "7. Boiled potatoes with fried onions.\n";
    std::cout << "8. Stewed cabbage - one more simple dish that has a rich and pleasant taste.\n";
    std::cout << "9. Mushroom gravy - a light sauce is just perfect for the lean table.\n";
    std::cout << "10. Uzvar - light and useful drink made using dried fruits.\n";
    std::cout << "11. Christmas bread.\n";
    std::cout << "12. Raw garlic - a symbol of purification from sins, as well as health..\n\n";
    std::cout << "*      *      *\n";
    std::cout << "Do you know what Shchedrivky are?\n";

    char choice3 = 0;

    for (int i = 0; i < 3 && choice3 != 'a' && choice3 != 'b'; i++) {

        std::cout << "a) No, tell me what they are?\n";
        std::cout << "b) Who cares... .\n";
        std::cin >> choice3;

    }

    if (choice3 != 'a' && choice3 != 'b') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    }
    else if (choice3 == 'b') {

        std::cout << "I am sorry to hear that.\n";
        std::cout << "Nevertheless, I am glad that you got to this point and learned a little about Ukrainian traditions related to the Christmas Holidays cycle.\n";
        std::cout << "THE END\n";
        return 0;
    }

    std::cout << "In addition to the carols, which sing at the Christmas time there are other songs called Shchedrivky.\n";
    std::cout << "Carol of the Bells is the iconic Christmas music that everyone knows.\n";
    std::cout << "But not many know that it's a Ukrainian folksong.\n";
    std::cout << "The Ukrainian song 'Shchedryk' became the basis for the world famous Christmas carol, 'Carol of the Bells'.\n";
    std::cout << "The world-known lyrics of Wilhousky speak about the ringing of bells that call to throw cares away.\n";
    std::cout << "The original lyrics based on the Ukrainian folk song “Schedryk” are much less known.\n";
    std::cout << "Though they are based on the same melody, the lyrics of the two songs share nothing in common.\n";
    std::cout << "The original lyrics of Ukrainian version speaks about a swallow that flew into a master’s household and started twittering to him about the increase of his livestock.\n";
    std::cout << "\n*      *      *\n";
    std::cout << "Thank you for your attention! I hope you liked it.\n";
    std::cout << "This was my first such long code.\n";

}