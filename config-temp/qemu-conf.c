#include <CoreAudio/CoreAudio.h>
int main(void)
{
  return (int)AudioGetCurrentHostTime();
}
