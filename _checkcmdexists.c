#include "main.h"
/**
 * _checkcmdexists - checks if command entered exists as an executable.
 * @argv: pointer to array containing the arguments entered.
 * @envp: pointer to the environment variables.
 *
 * Return: path to the executable if it exists.
 */
char *_checkcmdexists(char **argv, char *envp[])
{
	int k;
	char *_envp, *_onvp;
	char *_envpc, *_onvpc;
	char *path, *opath, *fpath;
	char **penv;
	const char *sc;

	_envp = NULL;
	penv = NULL;
	ntokens = 0;
	sc = ":";

	opath = _isabspath(argv, path);
	if (opath != NULL)
		return (opath);
	_onvp = _findpathenv(envp, _envp);
	_onvpc = _mallocchar(_onvp, _envpc);
	_strcpy(_onvpc, _onvp);
	penv = _tokenizeinput(_onvp, _onvpc, sc);
	if (opath == NULL)
		fpath = _appendtopath(penv, opath, argv);
	free(_onvp);
	for (k = 0; penv[k] != NULL; k++)
		free(penv[k]);
	free(penv);
	penv = NULL;

	return (fpath);
}
