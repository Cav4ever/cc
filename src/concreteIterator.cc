#include "concreteIterator.h"

ConcreteIterator::ConcreteIterator(Aggregate* m_Aggregate): m_nCurrent(0)
{
    this->m_Aggregate = m_Aggregate;
}

string ConcreteIterator::first()
{
    return m_Aggregate->getItem(0);
}

string ConcreteIterator::next()
{
    string strRet;
    m_nCurrent++;
    if(m_nCurrent < m_Aggregate->count()) {
        strRet = m_Aggregate->getItem(m_nCurrent);
    }
    return strRet;
}

string ConcreteIterator::getCur()
{
    return m_Aggregate->getItem(m_nCurrent);
}

bool ConcreteIterator::isEnd()
{
    return m_nCurrent >= m_Aggregate->count();
}