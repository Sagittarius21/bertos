/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2011 Develer S.r.l. (http://www.develer.com/)
 *
 * -->
 *
 * \brief Utility marcos for ads79xx ADC driver.
 *
 * \author Luca Ottaviano <lottaviano@develer.com>
 * \author Francesco Sacchi <batt@develer.com>
 *
 */

#ifndef ADS79XX_MACROS_H
#define ADS79XX_MACROS_H

#define ADS79xx_DATA_MASK  (0x0FFF)
#define ADS79xx_CH_MASK    (0xF000)
#define ADS79xx_DATA_BITS (12)
#define ADS79xx_GET_DATA(val, bits) ((val & 0x0FFF) >> (12 - (bits)))
#define ADS79xx_GET_CHAN(val) ((val & 0xF000) >> 12)

#endif /* ADS79XX_MACROS_H */
