# Quest
AUScheme.h 模板类,可以接受QuestChapter::Data类型,
QuestScheme.h QuestScheme<-QuestChapter<-QuestChapterDay<-QuestChapterDayGroupQuest,解析xml按照这个嵌套
QuestScheme2.h map<string, shared_ptr<Quest>>_quest便于查找quest是否存在;初始化了Quest*对象的属性
Quest.h 任务的具体属性
PlayerQuest.h 记录任务的状态
QuestBook.h map<std::string, shared_ptr<PlayerQuest>> _quests;存放db中任务
            std::vector<shared_ptr<PlayerQuest>> _chapterQuests;从_quests中取出当天活跃的任务
            std::vector<shared_ptr<PlayerQuest>> _activeQuests;从_quests中活跃的任务
            QuestScheme2 _scheme;主要是找任务是否存在
