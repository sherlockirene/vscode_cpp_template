#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Geometry>

int main() {
    // 定义四元数，表示绕y轴旋转90度
    Eigen::AngleAxisd rotation_vector(M_PI / 2, Eigen::Vector3d::UnitY());
    Eigen::Quaterniond quaternion(rotation_vector);

    // 定义初始向量 (1, 0, 0)
    Eigen::Vector3d vector(1, 0, 0);

    // 使用四元数进行旋转
    Eigen::Vector3d rotated_vector = quaternion * vector;

    // 输出结果
    std::cout << "Original vector: " << vector.transpose() << std::endl;
    std::cout << "Rotated vector: " << rotated_vector.transpose() << std::endl;

    return 0;
}