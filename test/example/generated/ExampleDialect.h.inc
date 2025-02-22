// DO NOT EDIT! This file is automatically generated by llvm-dialects-tblgen.


#ifdef GET_INCLUDES
#undef GET_INCLUDES
#include "llvm-dialects/Dialect/Dialect.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Instructions.h"

namespace llvm {
class raw_ostream;
template <typename T> class ArrayRef;
template <typename T> class iterator_range;
} // namespace llvm

namespace llvm_dialects {
class Builder;
} // namespace llvm_dialects
#endif // GET_INCLUDES

#ifdef GET_DIALECT_DECLS
#undef GET_DIALECT_DECLS

namespace xd {


    class ExampleDialect : public ::llvm_dialects::DialectImpl<ExampleDialect> {
      friend DialectImpl;
      friend ::llvm_dialects::DialectContext;

      void anchor() override;

    public:
      static Key& getKey();

    private:
      ExampleDialect(::llvm::LLVMContext& context);

      static ::llvm_dialects::Dialect* make(::llvm::LLVMContext& context);
  
      public:
        ::llvm::AttributeList getAttributeList(size_t index) const {
          return m_attributeLists[index];
        }

      private:
        ::std::array<::llvm::AttributeList, 4> m_attributeLists;
    };

    class XdHandleType : public ::llvm::TargetExtType {
      static constexpr ::llvm::StringLiteral s_name{"xd.handle"};

    public:
      static bool classof(const ::llvm::TargetExtType *t) {
        return t->getName() == s_name;
      }
      static bool classof(const ::llvm::Type* t) {
        return llvm::isa<::llvm::TargetExtType>(t) &&
                classof(llvm::cast<::llvm::TargetExtType>(t));
      }

      bool verifier(::llvm::raw_ostream &errs) const;

  static XdHandleType *get(::llvm::LLVMContext & ctx);

};


    class XdVectorType : public ::llvm::TargetExtType {
      static constexpr ::llvm::StringLiteral s_name{"xd.vector"};

    public:
      static bool classof(const ::llvm::TargetExtType *t) {
        return t->getName() == s_name;
      }
      static bool classof(const ::llvm::Type* t) {
        return llvm::isa<::llvm::TargetExtType>(t) &&
                classof(llvm::cast<::llvm::TargetExtType>(t));
      }

      bool verifier(::llvm::raw_ostream &errs) const;

  static XdVectorType *get(VectorKind kind, ::llvm::Type * elementType, uint32_t numElements);

VectorKind getKind() const;
::llvm::Type * getElementType() const;
uint32_t getNumElements() const;
};


      class StreamReduceOp : public ::llvm::CallInst {
      public:
        static bool classof(const ::llvm::CallInst* i);
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    ::llvm::Value * getPtr();
        void setPtr(::llvm::Value * ptr);
      ::llvm::Value * getCount();
        void setCount(::llvm::Value * count);
      ::llvm::Value * getInitial();
        void setInitial(::llvm::Value * initial);
      
      };
    
      class Add32Op : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.add32"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isSimpleOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static Add32Op* create(::llvm_dialects::Builder& b, ::llvm::Value * lhs, ::llvm::Value * rhs, uint32_t extra);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getLhs();
        void setLhs(::llvm::Value * lhs);
      ::llvm::Value * getRhs();
        void setRhs(::llvm::Value * rhs);
      uint32_t getExtra();
        void setExtra(uint32_t extra);
      
::llvm::Value * getResult();


      };
    
      class CombineOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.combine"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static CombineOp* create(::llvm_dialects::Builder& b, ::llvm::Value * lhs, ::llvm::Value * rhs);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getLhs();
        void setLhs(::llvm::Value * lhs);
      ::llvm::Value * getRhs();
        void setRhs(::llvm::Value * rhs);
      
::llvm::Value * getResult();


      };
    
      class ExtractElementOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.extractelement"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static ExtractElementOp* create(::llvm_dialects::Builder& b, ::llvm::Value * vector, ::llvm::Value * index);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getVector();
        void setVector(::llvm::Value * vector);
      ::llvm::Value * getIndex();
        void setIndex(::llvm::Value * index);
      
::llvm::Value * getResult();


      };
    
      class FromFixedVectorOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.fromfixedvector"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static FromFixedVectorOp* create(::llvm_dialects::Builder& b, ::llvm::Type* resultType, ::llvm::Value * source);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getSource();
        void setSource(::llvm::Value * source);
      
::llvm::Value * getResult();


      };
    
      class HandleGetOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.handle.get"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isSimpleOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static HandleGetOp* create(::llvm_dialects::Builder& b);

bool verifier(::llvm::raw_ostream &errs);


::llvm::Value * getResult();


      };
    
      class IExtOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.iext"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static IExtOp* create(::llvm_dialects::Builder& b, ::llvm::Type* resultType, ::llvm::Value * source);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getSource();
        void setSource(::llvm::Value * source);
      
::llvm::Value * getResult();


      };
    
      class ITruncOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.itrunc"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static ITruncOp* create(::llvm_dialects::Builder& b, ::llvm::Type* resultType, ::llvm::Value * source);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getSource();
        void setSource(::llvm::Value * source);
      
::llvm::Value * getResult();


      };
    
      class InsertElementOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.insertelement"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static InsertElementOp* create(::llvm_dialects::Builder& b, ::llvm::Value * vector, ::llvm::Value * value, ::llvm::Value * index);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getVector();
        void setVector(::llvm::Value * vector);
      ::llvm::Value * getValue();
        void setValue(::llvm::Value * value);
      ::llvm::Value * getIndex();
        void setIndex(::llvm::Value * index);
      
::llvm::Value * getResult();


      };
    
      class ReadOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.read"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static ReadOp* create(::llvm_dialects::Builder& b, ::llvm::Type* dataType);

bool verifier(::llvm::raw_ostream &errs);


::llvm::Value * getData();


      };
    
      class SizeOfOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.sizeof"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isSimpleOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static SizeOfOp* create(::llvm_dialects::Builder& b, ::llvm::Type * sizeofType);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Type * getSizeofType();
        void setSizeofType(::llvm::Type * sizeof_type);
      
::llvm::Value * getResult();


      };
    
      class StreamAddOp : public StreamReduceOp {
        static const ::llvm::StringLiteral s_name; //{"xd.stream.add"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static StreamAddOp* create(::llvm_dialects::Builder& b, ::llvm::Value * ptr, ::llvm::Value * count, ::llvm::Value * initial);

bool verifier(::llvm::raw_ostream &errs);


::llvm::Value * getResult();


      };
    
      class StreamMaxOp : public StreamReduceOp {
        static const ::llvm::StringLiteral s_name; //{"xd.stream.max"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static StreamMaxOp* create(::llvm_dialects::Builder& b, ::llvm::Value * ptr, ::llvm::Value * count, ::llvm::Value * initial);

bool verifier(::llvm::raw_ostream &errs);


::llvm::Value * getResult();


      };
    
      class StreamMinOp : public StreamReduceOp {
        static const ::llvm::StringLiteral s_name; //{"xd.stream.min"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isOverloadedOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static StreamMinOp* create(::llvm_dialects::Builder& b, ::llvm::Value * ptr, ::llvm::Value * count, ::llvm::Value * initial);

bool verifier(::llvm::raw_ostream &errs);


::llvm::Value * getResult();


      };
    
      class WriteOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.write"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isSimpleOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static WriteOp* create(::llvm_dialects::Builder& b, ::llvm::Value * data);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getData();
        void setData(::llvm::Value * data);
      


      };
    
      class WriteVarArgOp : public ::llvm::CallInst {
        static const ::llvm::StringLiteral s_name; //{"xd.write.vararg"};

      public:
        static bool classof(const ::llvm::CallInst* i) {
          return ::llvm_dialects::detail::isSimpleOperation(i, s_name);
        }
        static bool classof(const ::llvm::Value* v) {
          return ::llvm::isa<::llvm::CallInst>(v) &&
                 classof(::llvm::cast<::llvm::CallInst>(v));
        }
    static WriteVarArgOp* create(::llvm_dialects::Builder& b, ::llvm::Value * data, ::llvm::ArrayRef<::llvm::Value *> args);

bool verifier(::llvm::raw_ostream &errs);

::llvm::Value * getData();
        void setData(::llvm::Value * data);
      ::llvm::iterator_range<::llvm::Value *> getArgs();


      };
    } // namespace xd

#endif // GET_DIALECT_DECLS
