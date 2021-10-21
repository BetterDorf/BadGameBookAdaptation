#include "chapter_node.h"

using namespace std;

 chapter_node::chapter_node(std::string text, std::vector<int> destinations)
 {
	 text_ = text;
	 destinations_ = destinations;
 }

int chapter_node::play()
{
	//Show the text
	cout << this->text_ << endl;

	//If there is no option, send back the only destination
	if (destinations_.size() == 1)
		return destinations_.at(0);

	//Give the user the choice
	return get_destination(destinations_);
}

int chapter_node::get_destination(vector<int> valid_destis)
{
	int answer;
	bool validAnswer = false;
	do
	{
		//Show the options
		cout << "Fais un choix... (";
		for (auto desti : valid_destis)
		{
			//Print each valid destination
			cout << desti;
			if (desti != valid_destis.back())
				cout << ", ";
		}
		cout << ")" << endl;

		//Take the answer
		cin >> answer;

		//Check the answer
		for (auto desti : valid_destis)
			if (answer == desti)
				validAnswer = true;
	} while (!validAnswer);

	return answer;
}

