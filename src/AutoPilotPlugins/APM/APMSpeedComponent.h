

#ifndef APMSpeedComponent_H
#define APMSpeedComponent_H

#include "VehicleComponent.h"

class APMSpeedComponent : public VehicleComponent
{
    Q_OBJECT

public:
    APMSpeedComponent(Vehicle* vehicle, AutoPilotPlugin* autopilot, QObject* parent = nullptr);

    // Virtuals from VehicleComponent
    QStringList setupCompleteChangedTriggerList(void) const override;

    // Virtuals from VehicleComponent
    QString name                (void) const override;
    QString description         (void) const override;
    QString iconResource        (void) const override;
    bool requiresSetup          (void) const override;
    bool setupComplete          (void) const override;
    QUrl setupSource            (void) const override;
    QUrl summaryQmlSource       (void) const override;
    bool allowSetupWhileArmed   (void) const override { return true; }
    bool allowSetupWhileFlying  (void) const override { return true; }

private:
    const QString   _name;
    QVariantList    _summaryItems;
};

#endif
