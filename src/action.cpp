#include"../include/action.hh"

action_init::action_init() : m_generator(nullptr){}
action_init::~action_init(){
	delete m_generator;
}

void action_init::Build() const{
	if (!m_generator) {
		m_generator = new pri_gen::pri_gen();
	}
	SetUserAction(m_generator);
}
