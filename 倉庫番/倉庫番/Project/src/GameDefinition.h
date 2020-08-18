#pragma once

// ==============================
// �萔��`
// ==============================
// �X�e�[�W���
const int STAGE_WIDTH  = 11;
const int STAGE_HEIGHT = 13;

// �}�b�v�`�b�v�̏c���T�C�Y
#define CHIP_SIZE_WIDTH		32
#define CHIP_SIZE_HEIGHT	32

// �E�B���h�E�T�C�Y
#define WINDOW_W	(STAGE_WIDTH * CHIP_SIZE_WIDTH)
#define WINDOW_H	(STAGE_HEIGHT * CHIP_SIZE_HEIGHT)

//	���� ��`�����
// �I�u�W�F�N�g���
#define OBJ_GROUND			//	0	�n��
#define OBJ_WALL			//	1	��
#define PLAYER_START_POS	//	2	�v���C���[�̏����ʒu
#define CRATE_POS			//	3	�N���[�g�z�u�ꏊ
#define UNASSIGN_CRATE1		//	4	���z�u�̃N���[�g
#define UNASSIGN_CRATE2	
#define UNASSIGN_CRATE3	
#define ASSIGN_CRATE		//	7	�z�u�ς݂̃N���[�g
//			(�z�u�ꏊ'3'+���z�u�N���[�g'4' = 7�j

// �v���C���[�̌���
#define DIR_UP		0
#define DIR_DOWN	1
#define DIR_LEFT	2
#define DIR_RIGHT	3
#define DIR_MAX		4

// �v���C���[�̂P�����ɑ΂���摜����
#define DIR_IMAGE_MAX	3

// �v���C���[�̕��s�p�^�[����
#define PLAYER_ANIME_MAX	4
// ���s�̉摜�X�V�Ԋu
#define ANIME_SPAN			8

// �N���[�g�摜�̎�ށi�摜�\���Ɏg���j
// ����`�����
#define NUMBER_OF_CRATE_TYPES	3		//�N���[�g�̎�ސ�
#define MOVING_CRATE					//�������N���[�g
#define TARGET_LOCATION					//�ڕW�̏ꏊ�ɕ\������N���[�g
#define SUCCESSFUL_TARGET_LOCATION		//�ڕW�̏ꏊ�ɓ������N���[�g���ݒu���ꂽ�Ƃ��̃N���[�g
