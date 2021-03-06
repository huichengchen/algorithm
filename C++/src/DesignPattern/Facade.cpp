#include <iostream>

using namespace std;


/*
动机:
    A方案的问题在于组件的客户和组件中各种复杂的子系统有了过多的耦合，随着外部客户程序和各子系统的
    演化，这种过多的耦合面临着很多变化的挑战。

    如何简化外部客户程序和系统间的交互接口？如何将外部客户程序的演化和内部子系统的变化之间的依赖互相
    解耦。
*/





/*
定义: 
    为子系统中的一组接口提供一个一致（稳定）的界面，facade模式定义了一个高层接口，这个接口使得
   这一系统更加容易使用（复用）。 
*/





/*
总结: 
    架构设计模式
    从客户程序的角度来看，Facade模式简化了整个组件系统的接口，对于组件内部与外部客户来说，达到
    了一种“解耦”的效果——内部子系统的任何变化不会影响到Facade接口的变化。

    Facade设计模式更注重从架构的层次来看整个系统，而不是单个类的层次。

    Facade设计模式并非一个集装箱，可以任意的放进任何多个对象。Facade模式中组件的内部应该是“相互耦合
    关系比较大的一系列组件”，而不是一个简单的功能集合。
*/
