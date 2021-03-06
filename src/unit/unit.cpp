#include "unit.h"

Unit::Unit():
    m_name("Unit"),
    m_playerNumber(-1),
    m_playerColor(),
    m_movementPoints(1),
    m_maxMovementPoints(1),
    m_image(nullptr),
    m_unitActions(),
    m_actionAvailable()
{

}

Unit::~Unit()
{

}

void Unit::setName(const QString &name)
{
    m_name = name;
}

void Unit::setMovementPoints(int movementPoints)
{
    m_movementPoints = movementPoints;
}

void Unit::setMaxMovementPoints(int maxMovementPoints)
{
    m_maxMovementPoints = maxMovementPoints;
}

QImage *Unit::image() const
{
    return m_image;
}

void Unit::setImage(QImage *image)
{
    m_image = image;
}

void Unit::setPlayerNumber(int playerNumber)
{
    m_playerNumber = playerNumber;
}

QColor Unit::playerColor() const
{
    return m_playerColor;
}

void Unit::setPlayerColor(const QColor &playerColor)
{
    m_playerColor = playerColor;
}

void Unit::resetMovementPoints()
{
    m_movementPoints = m_maxMovementPoints;
}

void Unit::addAction(UnitAction action)
{
    m_unitActions.push_back(action);
    m_actionAvailable[action] = true; // or default value
}

QVector<UnitAction> Unit::actions() const
{
    return m_unitActions;
}

QMap<UnitAction, bool> Unit::actionAvailable() const
{
    return m_actionAvailable;
}

int Unit::playerNumber() const
{
    return m_playerNumber;
}

int Unit::movementPoints() const
{
    return m_movementPoints;
}

int Unit::maxMovementPoints() const
{
    return m_maxMovementPoints;
}

QString Unit::name() const
{
    return m_name;
}
