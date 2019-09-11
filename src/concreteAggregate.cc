#include "concreteAggregate.h"
#include "concreteIterator.h"

ConcreteAggregate::ConcreteAggregate(): m_pIterator(NULL)
{
    m_vecItems.clear();
}

int ConcreteAggregate::count()
{
    return m_vecItems.size();
}

void ConcreteAggregate::push(const string &strValue)
{
    m_vecItems.push_back(strValue);
}

string ConcreteAggregate::getItem(const int nIndex)
{
    string strRet;
    if(nIndex < this->count()) {
        strRet = m_vecItems[nIndex];
    }
    return strRet;
}

Iterator *ConcreteAggregate::CreateIterator()
{
    if(NULL == m_pIterator) {
        m_pIterator = new ConcreteIterator(this);
    }
    return m_pIterator;
}