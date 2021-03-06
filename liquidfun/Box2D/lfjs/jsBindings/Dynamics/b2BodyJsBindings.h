#ifndef B2BODYJSBINDINGS_H
#define B2BODYJSBINDINGS_H

extern "C" {
// b2Body exports
void b2Body_ApplyAngularImpulse(void* body, double impulse, double wake);
void b2Body_ApplyLinearImpulse(void* body, double impulseX, double impulseY,
                               double pointX, double pointY, double wake);
void b2Body_ApplyForce(void* body, double forceX, double forceY,
                       double pointX, double pointY, double wake);
void b2Body_ApplyForceToCenter(void* body, double forceX, double forceY,
                               double wake);
void b2Body_ApplyTorque(void* body, double force, double wake);
void b2Body_DestroyFixture(void* body, void* fixture);
double b2Body_GetAngle(void* body);
double b2Body_GetAngularVelocity(void* body);
double b2Body_GetInertia(void* body);
void b2Body_GetLinearVelocity(void* body, float* arr);
void b2Body_GetLocalPoint(void* body, double pointX, double pointY, float* arr);
void b2Body_GetLocalVector(void* body, double vX, double vY, float* arr);
double b2Body_GetMass(void* body);
double b2Body_GetType(void* body);
void b2Body_GetPosition(void* body, float* arr);
void b2Body_GetTransform(void* body, float* arr);
void b2Body_GetWorldCenter(void* body, float* arr);
void b2Body_GetWorldPoint(void* body, double pointX, double pointY, float* arr);
void b2Body_GetWorldVector(void* body, double vX, double vY, float* arr);
void b2Body_SetAngularVelocity(void* body, double angle);
void b2Body_SetAwake(void* body, double flag);
void b2Body_SetFixedRotation(void* body, double flag);
void b2Body_SetLinearVelocity(void* body, double x, double y);
void b2Body_SetMassData(void* body, double mass, double centerX,
                        double centerY, double inertia);
void b2Body_SetTransform(void* body, double x, double y, double angle);
void b2Body_SetType(void* body, double type);

void b2Body_SetGravityScale(void* body, double scale);
double b2Body_GetGravityScale(void* body);

void b2Body_SetLinearDamping(void* body, double linearDamping);
double b2Body_GetLinearDamping(void* body);
void b2Body_SetAngularDamping(void* body, double angularDamping);
double b2Body_GetAngularDamping(void* body);
bool b2Body_IsAwake(void* body);
void b2Body_SetBullet(void* body, double flag);
bool b2Body_IsBullet(void* body);
void b2Body_SetSleepingAllowed(void* body, double flag);
bool b2Body_IsSleepingAllowed(void* body);
void b2Body_SetActive(void* body, double flag);
bool b2Body_IsActive(void* body);
bool boBody_IsFixedRotation(void* body);
}
#endif
