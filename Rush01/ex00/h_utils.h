/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_utils.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:40:47 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/12 20:40:49 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_UTILS_H
# define H_UTILS_H

void	ft_putchar(char *chr);
void	ft_putstr(char *str);

void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

int		el_in_tab(int *row);
void	get_cols(int col_tab[4], int tab[4][4], int col_num);
void	lines_to_array(int checktab[4][4], int permut[24][4], int linesnum[4]);

void	print_solution(int tab[4][4]);
void	copy_array(int told[24][4], int tnew[24][4]);

void	add_permut(const int *v);
void	get_permut(int permut[24][4]);
void	heappermute(int c[], int n);

int		check(int *row, int val);
int		check_reverse(int *row, int val);

int		check_rows(int tab[4][4], int *val);
int		check_cols(int tab[4][4], int *val);
int		ready_to_run(int tab[4][4], int *val);

void	loop(int lines[4], int checktab[4][4], int permut[24][4], int val[16]);
void	resolve(int val[16]);
int		process_char(int cur, char **argv, int val[16]);

int		check_argcomponent(int argc);
int		check_argvector(char **argv, int *matrix);

#endif
