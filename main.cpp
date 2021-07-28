#include "F:\xml\pugixml-1.11\src\pugixml.hpp"

#include <iostream>
#include<string>
#include"AUScheme.h"
#include"QuestScheme.h"
#include"QuestScheme2.h"
#include <memory>
#include"QuestBook.h"


using namespace std;
int main()
{
    QuestBook qb;
    qb.loadChapter();
    vector<shared_ptr<PlayerQuest>>activeQuestVec = qb.getActiveQuest();
    for (auto ptr : activeQuestVec) {
        string questId = ptr.get()->getQuestPtr()->getId();
       
        if (qb.canBeComplete(questId)) {
            cout << "cur active quest::: " << questId << endl;
            ptr.get()->complete();
            qb.perAddQuest();
        }
    }
    qb.save();
}
