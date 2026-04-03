@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @eR(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %79
9:
  %10 = call i16** @__ctype_b_loc()
  %11 = load i16*, i16** %10
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i16, i16* %11, i64 %15
  %17 = load i16, i16* %16
  %18 = zext i16 %17 to i32
  %19 = and i32 %18, 8192
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %45
21:
  br label %22
22:
  %23 = load i8*, i8** %2
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %27, label %39
27:
  %28 = call i16** @__ctype_b_loc()
  %29 = load i16*, i16** %28
  %30 = load i8*, i8** %2
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i16, i16* %29, i64 %33
  %35 = load i16, i16* %34
  %36 = zext i16 %35 to i32
  %37 = and i32 %36, 8192
  %38 = icmp ne i32 %37, 0
  br label %39
39:
  %40 = phi i1 [ false, %22 ], [ %38, %27 ]
  br i1 %40, label %41, label %44
41:
  %42 = load i8*, i8** %2
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %2
  br label %22
44:
  br label %78
45:
  %46 = load i32, i32* %3
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %3
  br label %48
48:
  %49 = load i8*, i8** %2
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp ne i32 %51, 0
  br i1 %52, label %53, label %66
53:
  %54 = call i16** @__ctype_b_loc()
  %55 = load i16*, i16** %54
  %56 = load i8*, i8** %2
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i16, i16* %55, i64 %59
  %61 = load i16, i16* %60
  %62 = zext i16 %61 to i32
  %63 = and i32 %62, 8192
  %64 = icmp ne i32 %63, 0
  %65 = xor i1 %64, true
  br label %66
66:
  %67 = phi i1 [ false, %48 ], [ %65, %53 ]
  br i1 %67, label %68, label %77
68:
  %69 = load i8*, i8** %2
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = icmp eq i32 %71, 0
  br i1 %72, label %73, label %74
73:
  br label %77
74:
  %75 = load i8*, i8** %2
  %76 = getelementptr inbounds i8, i8* %75, i32 1
  store i8* %76, i8** %2
  br label %48
77:
  br label %78
78:
  br label %5
79:
  %80 = load i32, i32* %3
  ret i32 %80
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
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @eR(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
