#include <Ludi.h>

class DungeonOfOblivion : public Ludi::Application {
  public:
    DungeonOfOblivion(){

    }

    ~DungeonOfOblivion(){

    }
};

Ludi::Application* Ludi::CreateApplication(){
    return new DungeonOfOblivion();
}