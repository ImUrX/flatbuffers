// automatically generated by the FlatBuffers compiler, do not modify

package MyGame.Example

import com.google.flatbuffers.BaseVector
import com.google.flatbuffers.BooleanVector
import com.google.flatbuffers.ByteVector
import com.google.flatbuffers.Constants
import com.google.flatbuffers.DoubleVector
import com.google.flatbuffers.FlatBufferBuilder
import com.google.flatbuffers.FloatVector
import com.google.flatbuffers.LongVector
import com.google.flatbuffers.StringVector
import com.google.flatbuffers.Struct
import com.google.flatbuffers.Table
import com.google.flatbuffers.UnionVector
import java.nio.ByteBuffer
import java.nio.ByteOrder
import kotlin.math.sign

@Suppress("unused")
@kotlin.ExperimentalUnsignedTypes
class Vec3 : Struct() {

    fun __init(_i: Int, _bb: ByteBuffer)  {
        __reset(_i, _bb)
    }
    fun __assign(_i: Int, _bb: ByteBuffer) : Vec3 {
        __init(_i, _bb)
        return this
    }
    val x : Float get() = bb.getFloat(bb_pos + 0)
    fun mutateX(x: Float) : ByteBuffer = bb.putFloat(bb_pos + 0, x)
    val y : Float get() = bb.getFloat(bb_pos + 4)
    fun mutateY(y: Float) : ByteBuffer = bb.putFloat(bb_pos + 4, y)
    val z : Float get() = bb.getFloat(bb_pos + 8)
    fun mutateZ(z: Float) : ByteBuffer = bb.putFloat(bb_pos + 8, z)
    val test1 : Double get() = bb.getDouble(bb_pos + 16)
    fun mutateTest1(test1: Double) : ByteBuffer = bb.putDouble(bb_pos + 16, test1)
    val test2 : UByte get() = bb.get(bb_pos + 24).toUByte()
    fun mutateTest2(test2: UByte) : ByteBuffer = bb.put(bb_pos + 24, test2.toByte())
    val test3 : MyGame.Example.Test? get() = test3(MyGame.Example.Test())
    fun test3(obj: MyGame.Example.Test) : MyGame.Example.Test? = obj.__assign(bb_pos + 26, bb)
    companion object {
        fun createVec3(builder: FlatBufferBuilder, x: Float, y: Float, z: Float, test1: Double, test2: UByte, test3_a: Short, test3_b: Byte) : Vec3Offset {
            builder.prep(8, 32)
            builder.pad(2)
            builder.prep(2, 4)
            builder.pad(1)
            builder.putByte(test3_b)
            builder.putShort(test3_a)
            builder.pad(1)
            builder.putByte(test2.toByte())
            builder.putDouble(test1)
            builder.pad(4)
            builder.putFloat(z)
            builder.putFloat(y)
            builder.putFloat(x)
            return Vec3Offset(builder.offset())
        }
    }
}

@JvmInline
value class Vec3Offset(val offset: Int)
