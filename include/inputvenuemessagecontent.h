#ifndef INPUTVENUEMESSAGECONTENT_H
#define INPUTVENUEMESSAGECONTENT_H

#include <QVariant>
#include <QString>

#include "inputmessagecontent.h"

namespace Telegram
{
    class InputVenueMessageContent : public InputMessageContent
    {
    public:
        InputVenueMessageContent();
        InputVenueMessageContent(QJsonObject obj);
        
        //Getters/Setters
        double getLatitude() const;
        void setLatitude(double value);
        
        double getLongitude() const;
        void setLongitude(double value);
        
        QString getTitle() const;
        void setTitle(const QString &value);
        
        QString getAddress() const;
        void setAddress(const QString &value);
        
        QString getFoursquareId() const;
        void setFoursquareId(const QString &value);
        
        //Flag getters
        bool getHasLatitude() const;
        
        bool getHasLongitude() const;
        
        bool getHasTitle() const;
        
        bool getHasAddress() const;
        
        bool getHasFoursquareId() const;
        
    private:
        double latitude;
        double longitude;
        
        QString title;
        QString address;
        QString foursquareId;
        
        //Flags
        bool hasLatitude;
        bool hasLongitude;
        bool hasTitle;
        bool hasAddress;
        bool hasFoursquareId;
    };
}
#endif // INPUTVENUEMESSAGECONTENT_H
