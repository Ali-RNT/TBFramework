#ifndef USERPROFILEPHOTOS_H
#define USERPROFILEPHOTOS_H

#include <QJsonArray>
#include <QVariant>
#include <QVector>

#include "tarnaobject.h"
#include "photosize.h"

namespace Telegram
{
    class UserProfilePhotos : public TarnaObject
    {
    public:
        UserProfilePhotos(QJsonObject obj);
        UserProfilePhotos();
        
        //Getters/setters
        int getTotalCount() const;
        void setTotalCount(int value);
        
        QVector<QVector<PhotoSize> > getPhotos() const;
        void setPhotos(const QVector<QVector<PhotoSize> > &value);
        
        //Flag getters
        bool hasTotalCount() const;
        
        bool hasPhotos() const;
        
    private:
        int totalCount;
        
        QVector< QVector< PhotoSize > > photos;
        
        //Flags
        bool _hasTotalCount;
        bool _hasPhotos;
    };
}
#endif // USERPROFILEPHOTOS_H
