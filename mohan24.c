#include <stdio.h>
#include <stdlib.h>

int numMinutes = 103; /* ie 1 hour 43 minutes */

int main ( void )
{
if ( (numMinutes / 60) == 1 ) /* display 'x' hour... */
printf("%01d hour",numMinutes/60);
else /* display 'x' hours .... */
printf("%01d hours",numMinutes/60);

if ( (numMinutes % 60) == 1) /* display 'x' minute... */
printf(" %01d minute\n",numMinutes%60);
else /* display 'x' minutes....*/
printf(" %01d minutes\n",numMinutes%60);

return 0;
}
