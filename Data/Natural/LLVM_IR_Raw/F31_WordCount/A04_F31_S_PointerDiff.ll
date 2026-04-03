@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %64
9:
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %27
15:
  %16 = call i16** @__ctype_b_loc()
  %17 = load i16*, i16** %16
  %18 = load i8*, i8** %2
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i16, i16* %17, i64 %21
  %23 = load i16, i16* %22
  %24 = zext i16 %23 to i32
  %25 = and i32 %24, 8192
  %26 = icmp ne i32 %25, 0
  br label %27
27:
  %28 = phi i1 [ false, %10 ], [ %26, %15 ]
  br i1 %28, label %29, label %32
29:
  %30 = load i8*, i8** %2
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %2
  br label %10
32:
  %33 = load i8*, i8** %2
  %34 = load i8, i8* %33
  %35 = icmp ne i8 %34, 0
  br i1 %35, label %36, label %63
36:
  %37 = load i32, i32* %3
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %3
  br label %39
39:
  %40 = load i8*, i8** %2
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp ne i32 %42, 0
  br i1 %43, label %44, label %57
44:
  %45 = call i16** @__ctype_b_loc()
  %46 = load i16*, i16** %45
  %47 = load i8*, i8** %2
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i16, i16* %46, i64 %50
  %52 = load i16, i16* %51
  %53 = zext i16 %52 to i32
  %54 = and i32 %53, 8192
  %55 = icmp ne i32 %54, 0
  %56 = xor i1 %55, true
  br label %57
57:
  %58 = phi i1 [ false, %39 ], [ %56, %44 ]
  br i1 %58, label %59, label %62
59:
  %60 = load i8*, i8** %2
  %61 = getelementptr inbounds i8, i8* %60, i32 1
  store i8* %61, i8** %2
  br label %39
62:
  br label %63
63:
  br label %5
64:
  %65 = load i32, i32* %3
  ret i32 %65
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
  %13 = call i32 @WordCount(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
