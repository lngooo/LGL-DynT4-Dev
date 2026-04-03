@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @THmT(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %17, label %15
15:
  br label %79
17:
  %18 = call i16** @__ctype_b_loc()
  %19 = load i16*, i16** %18
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %4
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = zext i8 %24 to i32
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i16, i16* %19, i64 %26
  %28 = load i16, i16* %27
  %29 = zext i16 %28 to i32
  %30 = and i32 %29, 8192
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %44, label %32
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %4
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %4
  %36 = sext i32 %34 to i64
  %37 = getelementptr inbounds i8, i8* %33, i64 %36
  %38 = load i8, i8* %37
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %3
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %3
  %42 = sext i32 %40 to i64
  %43 = getelementptr inbounds i8, i8* %39, i64 %42
  store i8 %38, i8* %43
  br label %78
44:
  %46 = load i32, i32* %4
  store i32 %46, i32* %5
  br label %47
47:
  %48 = load i8*, i8** %2
  %49 = load i32, i32* %5
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp ne i32 %53, 0
  br i1 %54, label %55, label %70
55:
  %56 = call i16** @__ctype_b_loc()
  %57 = load i16*, i16** %56
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = zext i8 %62 to i32
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i16, i16* %57, i64 %64
  %66 = load i16, i16* %65
  %67 = zext i16 %66 to i32
  %68 = and i32 %67, 8192
  %69 = icmp ne i32 %68, 0
  br label %70
70:
  %71 = phi i1 [ false, %47 ], [ %69, %55 ]
  br i1 %71, label %72, label %75
72:
  %73 = load i32, i32* %5
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %5
  br label %47
75:
  %76 = load i32, i32* %5
  store i32 %76, i32* %4
  br label %78
78:
  br label %8
79:
  %80 = load i8*, i8** %2
  %81 = load i32, i32* %3
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %80, i64 %82
  store i8 0, i8* %83
  ret void
}
declare i16** @__ctype_b_loc()
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @THmT(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
