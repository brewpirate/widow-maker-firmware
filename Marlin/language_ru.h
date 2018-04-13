/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Russian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" готов.")
#define MSG_BACK                            _UxGT("Назад")
#define MSG_SD_INSERTED                     _UxGT("Карта вставлена")
#define MSG_SD_REMOVED                      _UxGT("Карта извлечена")
#define MSG_LCD_ENDSTOPS                    _UxGT("Эндстопы") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Меню")
#define MSG_AUTOSTART                       _UxGT("Автостарт")
#define MSG_DISABLE_STEPPERS                _UxGT("Выкл. двигатели")
#define MSG_DEBUG_MENU                      _UxGT("Меню отладки")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Тест индикатора")
#define MSG_AUTO_HOME                       _UxGT("Авто парковка")
#define MSG_AUTO_HOME_X                     _UxGT("Парковка X")
#define MSG_AUTO_HOME_Y                     _UxGT("Парковка Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Парковка Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Нулевое положение")
#define MSG_LEVEL_BED_WAITING               _UxGT("Нажмите чтобы начать")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Следующая точка")
#define MSG_LEVEL_BED_DONE                  _UxGT("Выравнивание готово!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Высота спада")
#define MSG_SET_HOME_OFFSETS                _UxGT("Запомнить парковку")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Коррекции применены")
#define MSG_SET_ORIGIN                      _UxGT("Запомнить ноль")
#define MSG_PREHEAT_1                       _UxGT("Преднагрев PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" всё")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" сопло")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" стол")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" настр.")
#define MSG_PREHEAT_2                       _UxGT("Преднагрев ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" всё")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" сопло")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" стол")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" настр.")
#define MSG_COOLDOWN                        _UxGT("Охлаждение")
#define MSG_SWITCH_PS_ON                    _UxGT("Включить питание")
#define MSG_SWITCH_PS_OFF                   _UxGT("Выключить питание")
#define MSG_EXTRUDE                         _UxGT("Экструзия")
#define MSG_RETRACT                         _UxGT("Втягивание")
#define MSG_MOVE_AXIS                       _UxGT("Движение по осям")
#define MSG_BED_LEVELING                    _UxGT("Калибровка стола")
#define MSG_LEVEL_BED                       _UxGT("Калибровать стол")
#define MSG_LEVEL_CORNERS                   _UxGT("Выровнять углы")
#define MSG_NEXT_CORNER                     _UxGT("Следующий угол")
#define MSG_EDITING_STOPPED                 _UxGT("Ред. сетки завершено")
#define MSG_USER_MENU                       _UxGT("Свои комманды")
#define MSG_UBL_DOING_G29                   _UxGT("Выполняем G29")
#define MSG_UBL_UNHOMED                     _UxGT("Паркуем сначала XYZ")
#define MSG_UBL_TOOLS                       _UxGT("Утилиты UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Калибровка UBL")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Постр. сетку от руки")
#define MSG_UBL_BC_INSERT                   _UxGT("Пост. шимм и измер.")
#define MSG_UBL_BC_INSERT2                  _UxGT("Измерение")
#define MSG_UBL_BC_REMOVE                   _UxGT("Удал. и измер. стол")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Двигаемся дальше")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Активировать UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Деактивировать UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Температура стола")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Температура сопла")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Редактор сеток")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Редакт. свою сетку")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Точная настр. сетки")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Ред. сетки завершено")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Построить свою сетку")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Построить сетку")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Построить сетку PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Построить сетку ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Построить хол. сетку")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Устан. высоту сетки")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Высота")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Проверить сетку")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Проверить сетку PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Проверить сетку ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Проверить свою сетку")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Продолжить сетку")
#define MSG_UBL_MESH_LEVELING               _UxGT("Калибровка сетки")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Калибровка 3-х точек")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Калибровка растера")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Выровнить сетку")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Крайние точки")
#define MSG_UBL_MAP_TYPE                    _UxGT("Тип карты")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Вывести карту сетки")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Вывести на хост")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Вывести в CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Забекапить сетку")
#define MSG_UBL_INFO_UBL                    _UxGT("Вывод информации UBL")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Редактировать сетку")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Кол-во заполнителя")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Ручное заполнение")
#define MSG_UBL_SMART_FILLIN                _UxGT("Умное заполнение")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Заполнить сетку")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Аннулировать всё")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Аннулир. ближ. точку")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Точная настр. всего")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Настр. ближ. точки")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Хранилище сетей")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Слот памяти")
#define MSG_UBL_LOAD_MESH                   _UxGT("Загрузить сетку стола")
#define MSG_UBL_SAVE_MESH                   _UxGT("Сохранить сетку стола")
#define MSG_MESH_LOADED                     _UxGT("Сетка %i загружена")
#define MSG_MESH_SAVED                      _UxGT("Сетка %i сохранена")
#define MSG_NO_STORAGE                      _UxGT("Нет хранилища")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Ошибка: Сохран. UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Ошибка: Восстан. UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Смещение Z останов.")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("Пошаговое UBL")

#define MSG_LED_CONTROL                     _UxGT("Настройки LED")
#define MSG_LEDS_ON                         _UxGT("Включить подсветку")
#define MSG_LEDS_OFF                        _UxGT("Выключить подсветку")
#define MSG_LED_PRESETS                     _UxGT("Предустановки света")
#define MSG_SET_LEDS_RED                    _UxGT("Красный свет")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Оранжевый свет")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Жёлтый свет")
#define MSG_SET_LEDS_GREEN                  _UxGT("Зелёный свет")
#define MSG_SET_LEDS_BLUE                   _UxGT("Синий свет")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Индиго свет")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Фиолетовый свет")
#define MSG_SET_LEDS_WHITE                  _UxGT("Белый свет")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Свет по умолчанию")
#define MSG_CUSTOM_LEDS                     _UxGT("Свои настр. света")
#define MSG_INTENSITY_R                     _UxGT("Интенсивн. красного")
#define MSG_INTENSITY_G                     _UxGT("Интенсивн. зелёного")
#define MSG_INTENSITY_B                     _UxGT("Интенсивн. синего")
#define MSG_INTENSITY_W                     _UxGT("Интенсивн. белого")
#define MSG_LED_BRIGHTNESS                  _UxGT("Яркость")

#define MSG_MOVING                          _UxGT("Движемся...")
#define MSG_FREE_XY                         _UxGT("Освобождаем XY")
#define MSG_MOVE_X                          _UxGT("Движение по X")
#define MSG_MOVE_Y                          _UxGT("Движение по Y")
#define MSG_MOVE_Z                          _UxGT("Движение по Z")
#define MSG_MOVE_E                          _UxGT("Экструдер")
#define MSG_MOVE_01MM                       _UxGT("Движение 0.1мм")
#define MSG_MOVE_1MM                        _UxGT("Движение 1мм")
#define MSG_MOVE_10MM                       _UxGT("Движение 10мм")
#define MSG_SPEED                           _UxGT("Скорость")
#define MSG_BED_Z                           _UxGT("Z стола")
#define MSG_NOZZLE                          _UxGT("Сопло")
#define MSG_BED                             _UxGT("Стол")
#define MSG_FAN_SPEED                       _UxGT("Кулер")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Кулер доп.")
#define MSG_FLOW                            _UxGT("Поток")
#define MSG_CONTROL                         _UxGT("Настройки")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Мин")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Макс")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Фактор")
#define MSG_AUTOTEMP                        _UxGT("Автотемпература")
#define MSG_ON                              _UxGT("Вкл.")
#define MSG_OFF                             _UxGT("Выкл.")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Выбор")
#define MSG_ACC                             _UxGT("Ускорение")
#define MSG_JERK                            _UxGT("Рывок")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-рывок")
  #define MSG_VB_JERK                       _UxGT("Vb-рывок")
  #define MSG_VC_JERK                       _UxGT("Vc-рывок")
#else
  #define MSG_VX_JERK                       _UxGT("Vx-рывок")
  #define MSG_VY_JERK                       _UxGT("Vy-рывок")
  #define MSG_VZ_JERK                       _UxGT("Vz-рывок")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-рывок")
#define MSG_VELOCITY                        _UxGT("Быстрота")
#define MSG_VMAX                            _UxGT("Vмакс ")
#define MSG_VMIN                            _UxGT("Vмин")
#define MSG_VTRAV_MIN                       _UxGT("Vпутеш. мин")
#define MSG_ACCELERATION                    _UxGT("Ускорение")
#define MSG_AMAX                            _UxGT("Aмакс ")
#define MSG_A_RETRACT                       _UxGT("A-втягивание")
#define MSG_A_TRAVEL                        _UxGT("A-путеш.")
#define MSG_STEPS_PER_MM                    _UxGT("Шаг/мм")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Aшаг/мм")
  #define MSG_BSTEPS                        _UxGT("Bшаг/мм")
  #define MSG_CSTEPS                        _UxGT("Cшаг/мм")
#else
  #define MSG_ASTEPS                        _UxGT("Xшаг/мм")
  #define MSG_BSTEPS                        _UxGT("Yшаг/мм")
  #define MSG_CSTEPS                        _UxGT("Zшаг/мм")
#endif
#define MSG_ESTEPS                          _UxGT("Eшаг/мм")
#define MSG_E1STEPS                         _UxGT("E1шаг/мм")
#define MSG_E2STEPS                         _UxGT("E2шаг/мм")
#define MSG_E3STEPS                         _UxGT("E3шаг/мм")
#define MSG_E4STEPS                         _UxGT("E4шаг/мм")
#define MSG_E5STEPS                         _UxGT("E5шаг/мм")
#define MSG_TEMPERATURE                     _UxGT("Температура")
#define MSG_MOTION                          _UxGT("Движение")
#define MSG_FILAMENT                        _UxGT("Филамент")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E в мм3")
#define MSG_FILAMENT_DIAM                   _UxGT("Диаметр филамента")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Загрузка мм")
#define MSG_FILAMENT_LOAD                   _UxGT("Выгрузка мм")
#define MSG_ADVANCE_K                       _UxGT("K продвижения")
#define MSG_CONTRAST                        _UxGT("Контраст LCD")
#define MSG_STORE_EEPROM                    _UxGT("Сохранить настройки")
#define MSG_LOAD_EEPROM                     _UxGT("Загрузить настройки")
#define MSG_RESTORE_FAILSAFE                _UxGT("Восстановить настр.")
#define MSG_INIT_EEPROM                     _UxGT("Инициализация EEPROM")
#define MSG_REFRESH                         _UxGT("Обновить")
#define MSG_WATCH                           _UxGT("Информационный экран")
#define MSG_PREPARE                         _UxGT("Подготовить")
#define MSG_TUNE                            _UxGT("Настроить")
#define MSG_PAUSE_PRINT                     _UxGT("Пауза печати")
#define MSG_RESUME_PRINT                    _UxGT("Продолжить печать")
#define MSG_STOP_PRINT                      _UxGT("Остановить печать")
#define MSG_CARD_MENU                       _UxGT("Печать с SD карты")
#define MSG_NO_CARD                         _UxGT("Нет SD карты")
#define MSG_DWELL                           _UxGT("Сон...")
#define MSG_USERWAIT                        _UxGT("Продолжить...")
#define MSG_PRINT_PAUSED                    _UxGT("Печать на паузе")
#define MSG_RESUMING                        _UxGT("Возобновление...")
#define MSG_PRINT_ABORTED                   _UxGT("Печать отменена")
#define MSG_NO_MOVE                         _UxGT("Нет движения.")
#define MSG_KILLED                          _UxGT("УБИТО. ")
#define MSG_STOPPED                         _UxGT("ОСТАНОВЛЕНО. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Втягивание мм")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Втягивание смены мм")
#define MSG_CONTROL_RETRACTF                _UxGT("Втягивание V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Втяг. прыжка мм")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Возврат мм")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Возврат смены мм")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Возврат V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Возврат смены V")
#define MSG_AUTORETRACT                     _UxGT("Авто Втягивание")
#define MSG_FILAMENTCHANGE                  _UxGT("Смена филамента")
#define MSG_FILAMENTLOAD                    _UxGT("Загрузка филамента")
#define MSG_FILAMENTUNLOAD                  _UxGT("Выгрузка филамента")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Выгрузить всё")
#define MSG_INIT_SDCARD                     _UxGT("Иниц. SD карту")
#define MSG_CNG_SDCARD                      _UxGT("Сменить SD карту")
#define MSG_ZPROBE_OUT                      _UxGT("Z датчик вне стола")
#define MSG_SKEW_FACTOR                     _UxGT("Фактор наклона")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Тестирование BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Сброс BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Установка BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Набивка BLTouch")
#define MSG_HOME                            _UxGT("Паркуй") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("первый")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Смещение Z")
#define MSG_BABYSTEP_X                      _UxGT("Микрошаг X")
#define MSG_BABYSTEP_Y                      _UxGT("Микрошаг Y")
#define MSG_BABYSTEP_Z                      _UxGT("Микрошаг Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Сработал концевик")
#define MSG_HEATING_FAILED_LCD              _UxGT("Разогрев не удался")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Разогр. стола не уд.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Ошибка: Избыточная Т")
#define MSG_THERMAL_RUNAWAY                 _UxGT("УБЕГАНИЕ ТЕПЛА")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("УБЕГАНИЕ ТЕПЛА СТОЛА")
#define MSG_ERR_MAXTEMP                     _UxGT("Ошибка: Т макс.")
#define MSG_ERR_MINTEMP                     _UxGT("Ошибка: Т мин.")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Ошибка: Т стола макс")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Ошибка: Т стола мин.")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("ПРИНТЕР ОСТАНОВЛЕН")
#define MSG_PLEASE_RESET                    _UxGT("Сделайте сброс")
#define MSG_SHORT_DAY                       _UxGT("д") // One character only
#define MSG_SHORT_HOUR                      _UxGT("ч") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("м") // One character only
#define MSG_HEATING                         _UxGT("Нагрев...")
#define MSG_HEATING_COMPLETE                _UxGT("Нагрев выполнен")
#define MSG_COOLING                         _UxGT("Охлаждение...")
#define MSG_COOLING_COMPLETE                _UxGT("Охлаждение выполнено")
#define MSG_BED_HEATING                     _UxGT("Нагрев стола")
#define MSG_BED_COOLING                     _UxGT("Охлаждение стола")
#define MSG_BED_DONE                        _UxGT("Стол разогрет")
#define MSG_DELTA_CALIBRATE                 _UxGT("Калибровка Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Калибровать X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Калибровать Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Калибровать Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Калибровать центр")
#define MSG_DELTA_SETTINGS                  _UxGT("Настройки Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Авто калибровка")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Задать высоту Delta")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Диаг. стержень")
#define MSG_DELTA_HEIGHT                    _UxGT("Высота")
#define MSG_DELTA_RADIUS                    _UxGT("Радиус")
#define MSG_INFO_MENU                       _UxGT("О принтере")
#define MSG_INFO_PRINTER_MENU               _UxGT("Инф. о принтере")
#define MSG_3POINT_LEVELING                 _UxGT("Калибровка 3-х точек")
#define MSG_LINEAR_LEVELING                 _UxGT("Линейная калибровка")
#define MSG_BILINEAR_LEVELING               _UxGT("Билинейная калибр.")
#define MSG_UBL_LEVELING                    _UxGT("Калибровка UBL")
#define MSG_MESH_LEVELING                   _UxGT("Калибровка сетки")
#define MSG_INFO_STATS_MENU                 _UxGT("Статистика принтера")
#define MSG_INFO_BOARD_MENU                 _UxGT("Информация о плате")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Термисторы")
#define MSG_INFO_EXTRUDERS                  _UxGT("Экструдеры")
#define MSG_INFO_BAUDRATE                   _UxGT("Бод")
#define MSG_INFO_PROTOCOL                   _UxGT("Протокол")
#define MSG_CASE_LIGHT                      _UxGT("Подсветка корпуса")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Яркость подсветки")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Счётчик печати")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Закончено")
  #define MSG_INFO_PRINT_TIME               _UxGT("Общее время печати")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Наидольшее задание")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Длинна филамента")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Отпечатков")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Закончено")
  #define MSG_INFO_PRINT_TIME               _UxGT("Всего")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Наидольшее")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Выдавлено")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Мин. Т")
#define MSG_INFO_MAX_TEMP                   _UxGT("Макс. Т")
#define MSG_INFO_PSU                        _UxGT("Блок питания")
#define MSG_DRIVE_STRENGTH                  _UxGT("Сила привода")
#define MSG_DAC_PERCENT                     _UxGT("Привод %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Запись DAC EEPROM")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("ПЕЧАТЬ НА ПАУЗЕ")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ЗАГРУЗКА ФИЛАМЕНТА")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("ВЫГРУЗКА ФИЛАМЕНТА")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("ОПЦИИ ВОЗОБНОВЛЕНИЯ:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Выдавить ещё")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Возобновить печать")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Сопла: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Возврат не удался")
#define MSG_ERR_PROBING_FAILED              _UxGT("Не удалось прощупать")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Низкая Т")

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Ожидайте")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("начала смены")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("филамента")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Ожидайте")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("выгрузки")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("филамента")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Вставьте пруток")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("и нажмите кнопку")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("для продолжения")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Нажмите кнопку для")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("нагрева сопла...")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Нагрев сопла")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Ждите...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Ожидайте")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("загрузки прутка")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Ожидайте")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("экструзии")
  #define MSG_FILAMENT_CHANGE_PURGE_3       _UxGT("филамента")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Ожидайте")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("возобновления")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("печати")
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Ожидайте...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Выгрузка...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Вставь и нажми")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Нагрев...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Загрузка...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Выдавливание...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Возобновление...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_RU_H
