define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  %11 = call i64 @strlen(i8* %10)
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = icmp ne i64 %11, %13
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %3
  br label %87
16:
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %20
20:
  %21 = load i8*, i8** %4
  %22 = load i32, i32* %8
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = icmp ne i8 %25, 0
  br i1 %26, label %29, label %27
27:
  br label %76
29:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 5
  %33 = mul nsw i32 %32, 2
  store i32 %33, i32* %9
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %8
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i32, i32* %6
  %41 = xor i32 %40, %39
  store i32 %41, i32* %6
  %42 = load i8*, i8** %5
  %43 = load i32, i32* %8
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = load i32, i32* %6
  %49 = xor i32 %48, %47
  store i32 %49, i32* %6
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %8
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = load i32, i32* %7
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %7
  %58 = load i8*, i8** %5
  %59 = load i32, i32* %8
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = load i32, i32* %7
  %65 = sub nsw i32 %64, %63
  store i32 %65, i32* %7
  %66 = load i32, i32* %9
  %67 = icmp slt i32 %66, 0
  br i1 %67, label %68, label %71
68:
  %69 = load i32, i32* %6
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %6
  br label %71
71:
  br label %73
73:
  %74 = load i32, i32* %8
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %8
  br label %20
76:
  %77 = load i32, i32* %6
  %78 = icmp eq i32 %77, 0
  br i1 %78, label %79, label %82
79:
  %80 = load i32, i32* %7
  %81 = icmp eq i32 %80, 0
  br label %82
82:
  %83 = phi i1 [ false, %76 ], [ %81, %79 ]
  %84 = zext i1 %83 to i32
  store i32 %84, i32* %3
  br label %87
87:
  %88 = load i32, i32* %3
  ret i32 %88
}
declare i64 @strlen(i8*)
